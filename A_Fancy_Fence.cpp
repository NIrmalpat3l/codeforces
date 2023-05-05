// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n; cin>>n;
    if(360 % (180-n)){
        cout<<"NO";
    }else{
        cout<<"YES";
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
    return 0;
}