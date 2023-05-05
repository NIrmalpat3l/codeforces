#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long int a,b;
        cin>>a>>b;
        long long int d=abs(a-b);
        if(d==0) cout<<0<<endl;
        else if(d>10){
            if(d%10==0){
                cout<<(d/10)<<endl;
            }else{
                cout<<(d/10)+1<<endl;
            }
        }
        else cout<<1<<endl;
    }
    return 0;
}