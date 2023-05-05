// Accepted
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/i;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void code(){
    long long x;
    cin>>x;
    if(sqrt(x)==int(sqrt(x)) && prime(sqrt(x))){
        cout<<"YES";
    }else{
        cout<<"NO";
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