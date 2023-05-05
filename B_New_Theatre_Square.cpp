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
    int n,m,oo,ot;
    cin>>n>>m>>oo>>ot;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int sing=0,dou=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == a[i][j+1] && a[i][j]== '.' && j!=m-1){
                dou++;
                j++;
            }else if(a[i][j]=='.'){
                sing++;
            }
        }
    }
    if(dou*oo*2 < dou*ot){
        cout<<sing*oo + dou*2*oo;
    }else{
        cout<<sing*oo + dou*ot;
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