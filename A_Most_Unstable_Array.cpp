// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n,m;
    cin>>n>>m;
    cout<<min(2ll,n-1)*m;
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