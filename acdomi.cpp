#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    if(n==1 && m==1){
        cout<<0;
    }else if(n==1){
        cout<<m-1;
    }else if(m==1){
        cout<<n-1;
    }else{
        cout<<(m-1)*n;
    }
    return 0;
}