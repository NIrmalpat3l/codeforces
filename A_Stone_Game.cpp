#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx,mn;
    mx=mn=a[0];
    int p_mx,p_mn;
    for(int i=0;i<n;i++){
        if(mx<=a[i]){
            mx=a[i];
            p_mx=i+1;
        }
        if(mn>=a[i]){
            mn=a[i];
            p_mn=i+1;
        }
    }
    // cout<<mx<<" "<<mn<<endl;
    // cout<<p_mx<<" "<<p_mn<<endl;
    if(abs(p_mx-p_mn)==1){
        flag=-1;
    }
    if((p_mx>=n/2 && p_mn>=n/2) || (p_mx<=n/2 && p_mn<=n/2)){
        p_mx=min(n-p_mx+1,p_mx);
        p_mn=min(n-p_mn+1,p_mn);
        // cout<<flag<<endl<<p_mx<<" "<<p_mn<<endl;
        cout<<p_mn+p_mx-1;
    }else{
        p_mx=min(n-p_mx+1,p_mx);
        p_mn=min(n-p_mn+1,p_mn);
        // cout<<flag<<endl<<p_mx<<" "<<p_mn<<endl;
        if(flag==-1){
            cout<<p_mn+1;
        }else{
            cout<<p_mn+p_mx;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}