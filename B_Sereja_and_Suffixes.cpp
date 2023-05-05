// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    map<int ,int > mp;
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=n-1;i>=0;i--){
        mp[a[i]]++;
        b[i]=mp.size();
    }
    while(m--){
        int x;
        cin>>x;
        cout<<b[x-1]<<endl;
    }
    return 0;
}
    // int n,m;
    // cin>>n>>m;
    // long long a[n];
    // for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<m;i++){
    //     set<int> s;
    //     int j;
    //     cin>>j;
    //     for(int k=j-1;k<n;k++){
    //         s.insert(a[k]);
    //     }
    //     cout<<s.size()<<endl;
    // }
    // return 0;