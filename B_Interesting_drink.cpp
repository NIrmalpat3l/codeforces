// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--){
        int x,ans=0;
        cin>>x;
        ans=upper_bound(a,a+n,x)-a;
        cout<<ans<<"\n";
    }
    return 0;
}