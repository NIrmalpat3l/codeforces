// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n],b[n],c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        while(a[i]>0){
            a[i]-=m;
            c++;
        }
        b[i]=c;
        c=0;
    }
    int mx=*max_element(b,b+n);
    for(int i=n-1;i>=0;i--){
        if(b[i]==mx){
            cout<<i+1;
            break;
        }
    }
}