#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int a;
    a=0;
    for(int i=n/2;i>=1;i--){
        a+=pow(2,i);
    }
    cout<<a<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
    return 0;
}