#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,jk,k;
    cin>>n>>jk>>k;
    int crd=n/k;
    int rmncrd=jk-crd;//3
    int plr=k-1;//2
    if(crd>=jk){
        cout<<jk;
        return;
    }else if(jk==0 || (crd==1 && jk>=2) || jk==n){
        cout<<0;
        return;
    }else{
        int add=(int) (rmncrd/plr) +rmncrd%plr;
        cout<<crd-add;
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