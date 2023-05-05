// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int x,y,a,b,ans=0;
    cin>>x>>y>>a>>b;
    long long int dx=abs(x);
    long long int dy=abs(y);
    if(2*a == b){
        ans+=(dx+dy)*a;
    }else if(2*a < b){
        ans+=(dx+dy)*a;
    }else if(2*a > b){
        ans+=min(dx,dy)*b;
        ans+=(max(dx,dy)-min(dx,dy))*a;
    }
    cout<<ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}