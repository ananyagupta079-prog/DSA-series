#include<iostream>
using namespace std;
bool pal(int i,string s,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return pal(i+1,s,n);
}
int main(){
    int n;
    string s;
    cin>>s;
    n=s.size();
    if(pal(0,s,n)){
        cout<<"Palindrome";
    }else{
        cout<<"Not a palindrome";
    }
}