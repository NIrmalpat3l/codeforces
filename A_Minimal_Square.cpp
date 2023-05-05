// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b;
    cin>>a>>b;
    int mn;
    mn=min(a,b);
    int l;
    if(min(a,b)==a){
        if(2*a>=b){
            l=2*a*2*a;
            cout<<l;
        }else{
            l=b*b;
            cout<<l;
        }
    }else{
        if(2*b>=a){
            l=2*b*2*b;
            cout<<l;
        }else{
            l=a*a;
            cout<<l;
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
}