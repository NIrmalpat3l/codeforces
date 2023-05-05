// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(a[n-1]<=d){
        cout<<"YES";
        return;
    }else if(d >= a[0]+a[1]){
        cout<<"YES";
        return;
    }
    cout<<"NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
