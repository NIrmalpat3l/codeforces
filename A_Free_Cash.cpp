// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    while (n--){
        int a,b;
        cin>>a>>b;
        mp[{a,b}]++;
    }
    int mx=0;
    for(auto i:mp){
        mx=max(mx,i.second);
    }
    cout<<mx;
    return 0;    
}