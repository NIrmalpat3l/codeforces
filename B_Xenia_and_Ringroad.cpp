// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int a[m],d=0;
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<m;i++){
        if(i==0){
            d+=a[0]-1;
        }else if(a[i]>=a[i-1]){
            d+=a[i]-a[i-1];
        }else{
            d+=n+(a[i]-a[i-1]);
        } 
    }
    cout<<d;
}
        // if(i==0){
        //     d+=a[0]-1;
        // }else if(a[i]==a[i+1]){
        //     d+=0;
        // }else{
        //     d+= n +(a[i+1]-a[i]);
        // }