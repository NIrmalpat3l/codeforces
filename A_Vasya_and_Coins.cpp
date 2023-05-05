// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b;
    cin>>a>>b;
    if(a==0){
        cout<<"1";
    }else{
        cout<<a*1 + b*2 +1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}