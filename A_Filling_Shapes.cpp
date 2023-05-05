// Accepted
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define maxx LLONG_MAX
#define mod 1000000007
#define PI 3.141592653589793238462643383279
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n%2) cout<<0;
    else cout<<(1<<(n/2));
}