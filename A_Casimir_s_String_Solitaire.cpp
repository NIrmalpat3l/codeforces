// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else c++;
    }
    if(a>c) swap(a,c);
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if((b-a)==c) cout<<"YES";
    else cout<<"NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}