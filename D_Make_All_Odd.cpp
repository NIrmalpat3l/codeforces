#include<bits/stdc++.h>
// Accepted
using namespace std;
void code(){
    long long int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        if(x&1){
            c++;
        }
    }
    if(n-c==n){
        cout<<-1;
        return;
    }
    cout<<n-c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}