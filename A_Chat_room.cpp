// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s;
    s2="hello";
    int j=0,c=0;
    for(int i=0; i<s.length();i++){
        if(s[i]==s2[j]){
            j++;
            c++;
        }
    }
    if(c==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
