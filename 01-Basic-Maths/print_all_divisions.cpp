#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>ls;
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls){
        cout<<it<<" ";
    }
}
