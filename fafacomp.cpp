#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<cnt;
}
int main(){
    code();
    return 0;
}