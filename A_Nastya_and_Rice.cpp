// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    // cout<<a-b<<" "<<n*(a-b)<<" ";
    // cout<<c-d<<" "<<c+d<<" ";
    if((((c+d)<(n*(a-b))) || ((c-d)>(n*(a+b))))){
        cout<<"No";
        return;
    }
    cout<<"Yes";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}