#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=0,c=0;
    vector<pair<char,char>>vp={{'m','M'},{'e','E'},{'o','O'},{'w','W'}};
    for(int i=0;i<s.length();i++){
        if(s[i]==vp[j].first || s[i]==vp[j].second){
            continue;
        }else if(s[i]==vp[j+1].first || s[i]==vp[j+1].second){
            j++;
        }else{
            break;
        }
    }
    if(j==3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
    return 0;
}