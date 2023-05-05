// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n;
    cin>>n;
    long long int a[n];
    long long int mx,mn;
    mx=mn=0;
    for(long long int i=0;i<n;i++) cin>>a[i];
    sort(a , a+n);
    int mx_value=a[0];
    int mn_value=a[n-1];
    for(int i=0;i<n;i++){
        if(a[i]==mx_value){
            mx++;
        }else if(a[i]==mn_value){
            mn++;
        }
    }
    if(mx_value==mn_value){
        cout<<n*(n-1);
    }else{
        cout<<mn*mx*2;
    }
    return;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}