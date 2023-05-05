// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,x=-1;
    cin>>n;
    if(n%7){
        for(int i=1;i<10;i++){
            if(((n - n%10) + i)%7 == 0){
                x=(n-n%10)+i;
            }
        }
        cout<<x;
    }else{
        cout<<n;
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