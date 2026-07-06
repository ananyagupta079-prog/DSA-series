#include<iostream>
using namespace std;
int main(){
    int n,i,c=0;
    cin>>n;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            c++;
        }
            if((n%i)!=i){
                c++;
            }
        }
    if(c==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
}
