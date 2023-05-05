#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s.length())%2!=0){
            cout<<"NO";
        }else{
            string s1=s.substr(0,(s.length())/2);
            string s2=s.substr((s.length())/2,(s.length())/2);
            if(s1==s2){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }
        cout<<endl;
    }
}