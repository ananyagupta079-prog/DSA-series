#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void brute(vector<vector<int>>arr,int n){
    vector<vector<int>>ans(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i]=arr[i][j];
        }
    }
    for(auto x:ans){
        for(int r:x){
            cout<<r<<" ";
        }
    }
}
void optimal(vector<vector<int>>arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //brute(arr,n);
    optimal(arr,n);
}
