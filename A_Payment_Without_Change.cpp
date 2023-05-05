// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    int x=s/n;
    if(a<=x){
        if((s-a*n) <= b){
            cout<<"YES";
            return;
        }
    }else{
        if(s%n <= b){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}