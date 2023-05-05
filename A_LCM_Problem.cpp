// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b;
    cin>>a>>b;
    if(b>=2*a){
        cout<<a<<" "<<a*2;
    }else{
        cout<<"-1 -1";
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