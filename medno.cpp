#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b,c;
    cin>>a>>b>>c;
    int m=a+b+c-max(a,max(b,c))-min(a,min(b,c));
    cout<<m;
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