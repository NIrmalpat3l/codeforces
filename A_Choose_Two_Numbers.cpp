// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int>v1(n);
    for(int i=0;i<n;i++) cin>>v1[i];
    sort(v1.begin(),v1.end());
    int m;
    cin>>m;
    vector<long long int>v2(m);
    for(int i=0;i<m;i++) cin>>v2[i];
    sort(v2.begin(),v2.end());
    cout<<v1[n-1]<<" "<<v2[m-1];
    return 0;
}