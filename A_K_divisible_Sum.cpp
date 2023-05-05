// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long  a,b;
    cin>>a>>b;
        if(b>a){
            if(b%a==0){
            cout<<b/a;
            }else if(b%a){
            cout<<b/a+1;
            }
        }else{
            if(a%b==0){
                cout<<1;
            }else if(a>b){
                cout<<2;
            }
        }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}