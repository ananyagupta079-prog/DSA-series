#include<iostream>
using namespace std;
void pr(int i,int n){
    if(i>n){
        return;
    }
    else{
        pr(i+1,n);
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    pr(0,n);
}
