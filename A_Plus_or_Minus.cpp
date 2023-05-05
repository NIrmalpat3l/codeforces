// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"+";
        return;
    }else{
        cout<<"-";
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