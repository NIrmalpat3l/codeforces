// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a;
    cin>>a;
    int x,mx=0;
    x=a;
    mx=a;
    while(x>=10){
        a+=x/10;
        x=x/10 + x%10 ;
    }
    mx=a;
    cout<<mx;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}