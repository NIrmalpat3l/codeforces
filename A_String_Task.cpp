// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='E' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='y' || s[i]=='Y' ){
            continue;
        }else{
            cout<<"."<<(char) tolower(s[i]);
        }
    }
}