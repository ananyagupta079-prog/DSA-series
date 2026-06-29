#include<iostream>
using namespace std;
void pr(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    pr(i-1,n);
}
int main(){
    int n;
    cin>>n;
    pr(n,n);
}