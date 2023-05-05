// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long a,b;
    cin>>a>>b;
    if(b==1){
        cout<<"NO";
        return;
    }
    else cout<<"Yes"<<endl;
    cout<<a<<" "<<a*b<<" "<<a*(b+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}