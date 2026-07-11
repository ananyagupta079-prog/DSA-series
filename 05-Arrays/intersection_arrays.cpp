#include<iostream>
#include<vector>
using namespace std;
// Brute Force Approach
void brute(vector<int>a1,vector<int>a2,int n,int m){
    vector<int>temp;
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a1[i]==a2[j] && vis[j]==0){
                temp.push_back(a1[i]);
                vis[j]=1;
                break;
            }
            if(a2[j]>a1[i]){
                break;
            }
        }
    }
    for(int x:temp){
        cout<<x<<" ";
    }
    cout<<endl;

}
//Optimal Approach
void optimal(vector<int>a1,vector<int>a2,int n,int m){
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            i++;
        }
        else if(a1[i]>a2[j]){
            j++;
        }
        else{
            ans.push_back(a1[i]);
            i++;
            j++;
        }
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a1(n),a2(m);
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    brute(a1,a2,n,m);

}
