#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<algorithm>
// Brute Force Approach
void brute(vector<int>a1,vector<int>a2,int n,int m){
    n=a1.size();
    m=a2.size();
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(a2[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}
// Optimal Approach
void optimal(vector<int>a1,vector<int>a2,int n,int m){
    n=a1.size();
    m=a2.size();
    int i=0,j=0;
    vector<int>unionarr;
    while(i<n&&j<m){
        if(a1[i]<=a2[j]){
            if(unionarr.size()==0 || unionarr.back()!=a1[i]){
                unionarr.push_back(a1[i]);

            }
            i++;
        }
        else{
            if(unionarr.size()==0 || unionarr.back()!=a2[j]){
                unionarr.push_back(a2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unionarr.size()==0 || unionarr.back()!=a1[i]){
            unionarr.push_back(a1[i]);
        }
        i++;
    }
    while(j<m){
        if(unionarr.size()==0 || unionarr.back()!=a2[j]){
            unionarr.push_back(a2[j]);
        }
        j++;
    }
    for(int k=0;k<unionarr.size();k++){
        cout<<unionarr[k]<<" ";
    }
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
    //brute(a1,a2,n,m);
    optimal(a1,a2,n,m);
}
