// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n;
    cin>>n;
    long long int i=n-1;
    for(int i=31;i>=0;i--){
        if(n&1<<i){
            cout<<(1<<i)-1;
            return;
        }
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
        cout<<"\n";
    }
}