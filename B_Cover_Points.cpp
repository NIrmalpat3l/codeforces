// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,mx=0;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        mx=max(mx,x+y);
    }
    cout<<mx;
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