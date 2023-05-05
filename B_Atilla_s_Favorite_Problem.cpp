// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    string s;
    cin>>n>>s;
    sort(s.begin(),s.end());
    cout<<((int)s[n-1])-96;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}