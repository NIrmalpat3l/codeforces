// Accepted
#include <bits/stdc++.h>
using namespace std;
void code(){
    int cnt=0;
    string s="314159265358979323846264338327";
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s[i]){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       code();
       cout<<endl;
    }
    return 0;
}