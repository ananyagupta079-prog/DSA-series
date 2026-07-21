#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//Brute Force Approach
void brute(vector<int>arr,int n,int tar){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==tar){
                cout<<i<<","<<j<<endl;
            }
        }
    }
}
//Better Approach
int better(vector<int>arr,int n,int tar){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int more=tar-a;
        if(mpp.find(more)!=mpp.end()){
            cout<<"YES"<<endl;
            return 1;
        }
        mpp[arr[i]]=i;
    }
    cout<<"NO";
    return 0;
}
// Optimal Approach
int optimal(vector<int>arr,int n,int tar){
    int l=0,r=n-1,s=0;
    sort(arr.begin(),arr.end());
    while(l<r){
        s+=arr[l]+arr[r];
        if(s==tar){
            cout<<"YES";
            return 1;
        }
        else if(s<tar){
            l++;
        }
        else{
            r--;
        }
        
    }
    cout<<"NO";
    return 0;
}
int main(){
    int n,tar;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
    cin>>tar;
    //brute(arr,n,tar);
    //int b=better(arr,n,tar);
    //cout<<b<<endl;
    int o=optimal(arr,n,tar);
}
