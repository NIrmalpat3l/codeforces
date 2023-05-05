// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int c=0;
        if(v[i]==v[i+1] && v[i]==v[i+2]){
            c+=3;
            i+=2;
        }
        if(c>=3){
            cout<<v[i];
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