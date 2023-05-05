// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    int k;
    if(c=='R'){
        k=-1;
    }else{
        k=1;
    }
    string s,s1;
    s="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>s1;
    for(int i=0;i<s1.length();i++){
        int pos=0;
        for(int j=0;j<s.length();j++){
            if(s1[i]==s[j]){
                pos=j;
                cout<<s[j+k];
            }
            
        }
    }
    return 0;
}