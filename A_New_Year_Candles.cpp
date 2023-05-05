// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x,y=0,shocks;
    x=a;
    shocks=a;
    while(x>=b){
        a+=x/b;
        x=x/b + x%b ;
    }
    shocks=a;
    cout<<shocks;
    return 0;
}