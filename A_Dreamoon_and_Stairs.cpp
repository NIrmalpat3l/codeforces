// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,ans=0;
    cin>>n>>m;
    if(m>n){
        cout<<-1;
    }else{
        if(n%2){
            ans+=n/2+1;
        }else{
            ans+=n/2;
        }
        while(ans%m){
            ans++;
        }
        cout<<ans;
    }
}