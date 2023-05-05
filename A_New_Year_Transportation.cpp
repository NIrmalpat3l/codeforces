// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    int a[n];
    int p=0;
    for(int i=0;i<n-1;i++) cin>>a[i];
    while(p<m-1){
        p+=a[p];
    }
    if(p==m-1) cout<<"YES";
    else cout<<"NO";
    return 0;
}