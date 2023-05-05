// Accepted 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define maxx LLONG_MAX
#define mod 1000000007
#define PI 3.141592653589793238462643383279
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

void code(){
    auto lamda=[](string s,int k) -> string {
        string null="";
        while(k--){
            null+=s;
        }
        return null;
    };
    string s,t;
    cin>>s>>t;
    int n=s.length(),m=t.length();
    int g=__gcd(m,n);
    if(lamda(s,m/g) == lamda(t,n/g)){
        cout<<lamda(s,m/g);
    }else{
        cout<<-1;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<"\n";
    }
}
