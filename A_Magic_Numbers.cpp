// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=0;
    int loop=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            len+=3;
            i+=2;
        }else if(s[i]=='1' && s[i+1]=='4'){
            len+=2;
            i+=1;
        }else if(s[i]=='1'){
            len++;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    if(len==s.length()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}