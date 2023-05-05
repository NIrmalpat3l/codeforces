#include<bits/stdc++.h>
using namespace std;
void code(){
    int a,b;
    cin>>a>>b;
    if(b - (b%10) <= a){
        cout<<b;
    }else{
        cout<<b-(b%10);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}