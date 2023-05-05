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
    int n;
    cin>>n;
    int sum=0,c=0;
    int x=n;
    while(x--){
        int x;
        cin>>x;
        if(x&1){
            c++;
        }
    }
    // cout<<c;
    if((c>0 && c<=n && c&1) || (c>0  && c<n)) cout<<"YES";
    else cout<<"NO";
    
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
    return 0;
}