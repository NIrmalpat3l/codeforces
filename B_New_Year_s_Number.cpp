#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int x,y;
    x=n/2020;
    y=n%2020;
    if(x>=y){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
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