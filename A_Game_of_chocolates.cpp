#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int c=0;
    int x=n;
    while(x>0){
        if(x>=5){
            x-=5;
            c++;
        }else if(x>=2){
            x-=2;
            c++;
        }else if(x==1){
            x-=1;
            c++;
        }
    }
    // cout<<c;
    if(c%2){
        cout<<"Dhruv";
    }else{
        cout<<"Urvik";
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