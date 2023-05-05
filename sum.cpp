#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            if(b+c == a) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(a+b == c)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }else{
        if(b>c){
            if(a+c == b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(b+a ==c)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    }
    return 0;
}