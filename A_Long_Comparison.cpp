// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    float x,a,y,b;
    cin>>x>>a>>y>>b;
    // a+=log10(x);
    // b+=log10(y);
    // x/=pow(10,(long long int)log10(x));
    // y/=pow(10,(long long int)log10(y));
    while(x>=10){
        x/=10;
        a++;
    }
    while(y>=10){
        y/=10;
        b++;
    }
    if(a>b){
        cout<<">";
        return;
    }else if(a<b){
        cout<<"<";
        return;
    }else{
        if(x>y){
            cout<<">";
            return;
        }else if(x<y){
            cout<<"<";
            return;
        }else{
            cout<<"=";
            return;
        }
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