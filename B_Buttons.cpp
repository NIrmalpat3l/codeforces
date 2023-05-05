#include<bits/stdc++.h>
using namespace std;
int code(){
    int n;
    cin>>n;
    int ans=n;
    for(int i=0;i<n;i++){
        ans+=(n-i)*i;
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}