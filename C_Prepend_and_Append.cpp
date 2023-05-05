// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=n;
    int a=0,b=n-1;
    while(s[a]!=s[b] && c>0){
        c=c-2;
        a++;
        b--;
    }
    cout<<c;
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