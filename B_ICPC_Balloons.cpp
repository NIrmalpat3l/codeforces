#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    string s;
    cin>>n>>s;
    map<char, int> count;
    for(int i = 0; i < s.size(); i++){
        count[s[i]]++;
    }
    int m=count.size();
    int ans=n*2 - (n-m);
    cout<<ans;
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