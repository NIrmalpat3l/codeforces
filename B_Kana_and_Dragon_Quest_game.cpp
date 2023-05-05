#include<bits/stdc++.h>
using namespace std;
void code(){
    int x,n,m;
    cin>>x>>n>>m;
    int ind=0;
    for(int i=0;i<n;i++){
        if(x<=20){
            break;
        }
        x/=2;
        x+=10;
        if(x<=0){
            cout<<"YES";
            return;
        }
    }
    if(ind==0){
        x=x-m*10;
        if(x<=0){
            cout<<"YES";
            return;
        }else{
            cout<<"NO";
            return;
        }
    }
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