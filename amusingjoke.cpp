#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    string a,b,s;
    cin>>a>>b>>s;
    string c;
    c = a + b;
    sort(c.begin() , c.end());
    sort(s.begin() , s.end());
    if(c==s) cout<<"YES";
    else cout<<"NO";
    return 0;
}