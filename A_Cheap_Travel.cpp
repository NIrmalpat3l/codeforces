// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,b;
    cin>>n>>m>>a>>b;
    long long int ti,re=0;
    long long int mn;
    long long int mini=min(m*a,b);
    if(mini==b){
        ti=(n/m) * b;
        if(b>(n%m)*a){
            re+=n%m * a;
        }else{
            re+=b;
        }
        mn=ti+re;
    }else{
        ti=(n)*a;
        mn=ti;
    }
    cout<<mn;
}