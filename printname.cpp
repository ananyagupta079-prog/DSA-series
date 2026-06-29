#include<iostream>
using namespace std;
void nam(int i,int n){
    if(i>n){
        return;
    }else{
        cout<<"ANANYA"<<endl;
        nam(i+1,n);

    }
}
int main(){
    int n,i;
    cin>>n;
    nam(1,n);
}