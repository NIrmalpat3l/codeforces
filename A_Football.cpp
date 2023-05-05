// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt=1;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            cnt++;
        }else{
            cnt=1;
        }
        if(cnt>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}