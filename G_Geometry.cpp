#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    int d=n;
    vector<pair<int ,int >> v(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i].first=a;
        v[i].second=b;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((v[i].first != v[j].first)){
                c++;
            }
        }
    }
    cout<<c;
}
