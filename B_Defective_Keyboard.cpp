// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='z' && s[i]!='Z' && s[i]!='x' && s[i]!='X' && s[i]!='c' && s[i]!='C' && s[i]!='v' && s[i]!='V' && s[i]!='b' && s[i]!='B' && s[i]!='n' && s[i]!='N' && s[i]!='m' && s[i]!='M'){
            cout<<s[i];
        } 
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}