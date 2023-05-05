#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="codeforces";
    char c;
    int t=0;
    cin>>t;
    while(t--){
        cin>>c;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(c==s[i]){
                cnt++;
            }
        }
        if(cnt==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}