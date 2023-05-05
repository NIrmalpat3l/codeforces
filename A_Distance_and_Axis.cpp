// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n,k;
    cin>>n>>k;
    if(k>=n){
        cout<<k-n;
        return;
    }else if((n%2==1 && k%2==1) || (n%2==0 && k%2==0)){
        cout<<0;
        return;
    }else{
        cout<<1;
        return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}