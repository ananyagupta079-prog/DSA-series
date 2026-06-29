#include<iostream>
using namespace std;
void pr(int i,int n){
    if(i<1){
        return;
    }
    pr(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    pr(n,n);
}