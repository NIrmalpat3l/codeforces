// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    string s;
    cin>>s;
    int x,y,mn;
    x=y=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') x++;
        else y++;
    }
    mn=min(x,y);
    if(mn%2) cout<<"DA";
    else cout<<"NET";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}