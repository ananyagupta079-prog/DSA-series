#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    int num=n;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    if(n==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}
