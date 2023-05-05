// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=0;
    string s1="meow";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.size();i++){
        if(s[i]==s1[j] && s[i]!=s[i+1]){
            j++;
        }else if(s[i]==s1[j]){
            continue;
        }else{
            cout<<"NO";
            return;
        }
    }
    if(j==4) cout<<"YES";
    else cout<<"NO";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}