#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b;
        cin>>a>>b;
        if(b>a){
            int d=b-a;
            if(d%2!=0 && d!=0) cout<<1<<endl;
            else if(d==0)      cout<<0<<endl;
            else               cout<<2<<endl;
        }else{
            int d=a-b;
            if(d%2==0 && d!=0) cout<<1<<endl;
            else if(d==0)      cout<<0<<endl;
            else               cout<<2<<endl;
        }
    }
}