// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cnt=0;
    if(b>d){
        cout<<"-1";
        return;
    }
    int diff=d-b;
    cnt+=diff;
    a+=d-b;
    if(a<c){
        cout<<"-1";
        return;
    }else{
        cnt+=a-c;
    }
    cout<<cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}