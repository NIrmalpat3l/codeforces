// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    if((int)log10(t)+1 > n){
        cout<<-1;
    }else{
        if(t==10){
            n--;
            while(n--){
                cout<<1;
            }
            cout<<0;
        }else{
            while(n--){
                cout<<t;
            }
        }
    }
}