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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n-1;i++){
        if(a[i-1]+a[i] > a[i+1]){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        code();
        cout<<"\n";
    }
}