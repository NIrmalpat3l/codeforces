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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int stp=0;
    if(m%n){
        cout<<-1;
        return 0;
    }else{
        int x=m/n;
        while(x%2==0){
            x/=2;
            stp++;
        }
        while(x%3==0){
            x/=3;
            stp++;
        }
        if(x!=1){
            cout<<-1;
            return 0;
        }else{
            cout<<stp;
            return 0;
        }
    }
}