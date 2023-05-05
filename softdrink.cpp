#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // cout<<n<<" "<<k<<" "<<l<<" "<<c<<" "<<d<<" "<<p<<" "<<nl<<" "<<np<<" ";
    int ttl=k*l;
    int tst=ttl/nl;
    int lime=c*d;
    int salt=p/np;
    tst<lime ? (tst<salt ? cout<<tst/n : cout<<salt/n)  :  (lime<salt ? cout<<lime/n : cout<<salt/n);
    return 0;
}