#include<bits/stdc++.h>
using namespace std;
void code(){
    string s;
    int c=0,n;
    cin>>n;
    cin>>s;
    string s1="Timur";
    sort(s1.begin(),s1.end());
    sort(s.begin(),s.end());
    s1==s ? cout<<"yes"<<endl : cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
    return 0;
}