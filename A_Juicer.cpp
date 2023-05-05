// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d;
    cin>>n>>b>>d;
    int a[n];
    int juice=0;
    int ttl=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=b){
            ttl+=a[i];
        }
        if(ttl>d){
            juice++;
            ttl=0;
        }
    }
    cout<<juice;
}