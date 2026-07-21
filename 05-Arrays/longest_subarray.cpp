#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
// Brute Force Approach
void brute(vector<int>arr,int n,int k){
    int len=0,i,j;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
        if(s==k){
        len=max(len,j-i+1);
        }
    }
}
cout<<len<<endl;
}
//Better Approach
int better(vector<int>arr,int n,int k){
    map<long long,int>mpp;
    int s=0,len=0,i;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s==k){
            len=max(len,i+1);
        }
    long long rem=s-k;
    if(mpp.find(rem)!=mpp.end()){
        int length=i-mpp[rem];
        len=max(len,length);

    }
    if(mpp.find(rem)==mpp.end()){
        mpp[s]=i;
    }
}
return len;
}
//Optimal Approach
int optimal(vector<int>arr,int n,int k){
    int left=0,right=0;
    long long s=arr[0];
    int len=0;
    while(right<n){
        while(left<=right && s>k){
            s-=arr[left];
            left++;
        }
    if(s==k){
        len=max(len,right-left+1);
    }
    right++;
    if(right<n){
        s+=arr[right];
    }
}
    return len;
}
int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
    cin>>k;
    //brute(arr,n,k);
    //int b=better(arr,n,k);
    //cout<<b<<endl;
    int o=optimal(arr,n,k);
    cout<<o<<endl;
}

