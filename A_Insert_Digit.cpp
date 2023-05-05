// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if((((int)s[i]-48)<d) && c==0){
            cout<<d;
            c=1;
        }
        cout<<s[i];
    }
    if((n==1 && n>d) || c==0){
        cout<<d;
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