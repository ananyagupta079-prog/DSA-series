#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int hash[26]={0};
    for(int i=0;i<str.size();i++){
        hash[str[i]-'a']++;
    }
    char ch;
    cin>>ch;
    cout<<hash[ch-'a']<<endl;
    return 0;
}