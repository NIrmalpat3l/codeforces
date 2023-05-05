#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(p[i].first < p[i+1].first && p[i+1].second < p[i].second){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}