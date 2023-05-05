#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int mx=0,pos=0;
    for(int i=0;i<n-1;i++){
        int c=0;
        for(int j=0;j<n-1;j++){
            if((s[j]==s[i] && s[j+1]==s[i+1])){
                c++;
            }
        }
        if(c>mx){
            pos=i;
        }
        mx=max(c,mx);
    }
    cout<<s[pos]<<s[pos+1];
    return 0;
}