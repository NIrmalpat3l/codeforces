// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j] && i!=j){
                cnt++;
            }
        }
        if(cnt!=0){
            cout<<"NO";
            return;
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