#include<iostream>
#include<vector>
#include<map>
using namespace std;
// Brute Force Approach
int brute(vector<int>arr,int n){
    int num,i;
    for(int i=0;i<n;i++){
        int num=arr[i];
    }
     int cnt=0;
    for(int j=0;j<n;j++){
        if(arr[j]==num){
            cnt++;
        }
    }
    if(cnt==1){
        return i;
    }
}
// Better Approach
int better(vector<int>arr,int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]];
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return 0;
}
// optimal Approach
int optimal(vector<int>arr,int n){
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    return XOR;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int br=brute(arr,n);
    cout<<br<<endl;
    int b=better(arr,n);
    cout<<b<<endl;
    int o=optimal(arr,n);
    cout<<o<<endl;
}