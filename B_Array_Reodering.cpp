// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    long long int a[n];
    int pair=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){ 
            if(__gcd(a[i],2*a[j])>1 || __gcd(a[j],2*a[i])>1){
                pair++;
            }
        }
    }
    cout<<pair;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}