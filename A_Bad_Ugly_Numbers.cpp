// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    if(n==1) cout<<-1;
    else{
        cout<<2;
        n--;
        while(n--){
            cout<<3;
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