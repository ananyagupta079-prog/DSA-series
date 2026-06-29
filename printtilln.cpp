#include<iostream>
using namespace std;
void pr(int i,int n){
    if(i>n){
        return;
    }else{
        cout<<i<<" ";
        pr(i+1,n);
    }
}
int main(){
    int n;
    cin>>n;
    pr(0,n);
}