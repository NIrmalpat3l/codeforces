// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c)+1)-a<<" "<<max(b,max(a,c)+1)-b<<" "<<max(c,max(b,a)+1)-c;
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