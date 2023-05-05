// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        int pi=i+1;
        for(int j=i+1;j<n;j++){
            int pj=j+1;
            if(s[i]==s[j]){
                if(pi%2!=0 && pj%2==0){
                    cout<<"NO";
                    return;
                }else if(pi%2==0 && pj%2!=0){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}