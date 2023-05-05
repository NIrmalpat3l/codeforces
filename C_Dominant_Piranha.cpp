// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n;
    cin>>n;
    long long int mx;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mx=*max_element(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(v[i]!=v[i-1] && v[i]==mx){
                cout<<i+1;
                return;
            }
        }else if(((v[i]==mx && v[i]!=v[i+1]) || (v[i]==mx && v[i]!=v[i-1])) && (i!=0)){
            cout<<i+1;
            return;
        }else if(i==0 && (v[i]==mx && v[i]!=v[i+1])){
            cout<<i+1;
            return;
        }
    }
    cout<<"-1";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}