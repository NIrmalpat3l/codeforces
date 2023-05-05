// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=abs(b-c)+c-1;
    if(a-1<d){
        cout<<"1";
    }else if(a-1>d){
        cout<<"2";
    }else{
        cout<<"3";
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