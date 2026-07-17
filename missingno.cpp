#include<iostream>
#include<vector>
using namespace std;
// Brute Force Approach
int brute(vector<int>arr,int n){
    int flag=0,i;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        return i;
    }
}
//Better Approach
int better(vector<int>arr,int n){
    int i;
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int j=0;j<n;j++){
        if(hash[i]<=0){
            return i;
        }
    }
}
//Optimized Appraoch
int optimal(vector<int>arr,int n){
    int sum=n*(n+1)/2,s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return(sum-s);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b=brute(arr,n);
    cout<<b<<endl;
    int be=better(arr,n);
    cout<<be<<endl;
    int o=optimal(arr,n);
    cout<<o<<endl;
}