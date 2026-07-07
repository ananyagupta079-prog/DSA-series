#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n,num,c=0,s=0,nu;
    cin>>n;
    num=n,nu=n;
    while(num!=0){
        c++;
        num/=10;
    }
    while(nu!=0){
        s+=pow(nu%10,c);
        nu/=10;
    }
    if(s==n){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}
