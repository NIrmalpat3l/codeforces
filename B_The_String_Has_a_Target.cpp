// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char mini=s[0];
    int pos=0;
    for(int i=1;i<n;i++){
        if(mini>=s[i]){
            mini=s[i];
            pos=i;
        }
    }
    cout<<mini;
    for(int i=0;i<n;i++){
        if(pos!=i){
            cout<<s[i];
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