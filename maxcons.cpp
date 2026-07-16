#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int conse(vector<int>arr,int n){
    int maxi=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=conse(arr,n);
    cout<<x<<endl;
}