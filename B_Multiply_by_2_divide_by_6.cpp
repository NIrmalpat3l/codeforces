#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int x=n;
    int stp=0;
    while(x%6==0 || x%3==0 || x!=1){
        if(x%6==0){
            x=x/6;
            stp++;
        }else if(x%3==0){
            x=x*2;
            stp++;
        }else{
            cout<<"-1";
            return;
        }
    }
    cout<<stp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}