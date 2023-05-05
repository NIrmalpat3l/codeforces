// Accepeted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,o;
    cin>>n>>o;
    int cnt=0;
    // vector<int>v1(n),v2(n);
    for(int i=0;i<n;i++){
        char c;
        long long int x;
        cin>>c>>x;
        if(c=='+'){
            o+=x;
        }else{
            if(o>=x){
                o-=x;
            }else{
                cnt++;
            }
        }
    }
    cout<<o<<" "<<cnt;
    return 0;
}