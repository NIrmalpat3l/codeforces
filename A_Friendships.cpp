#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t>>n;
    vector<<pair<int,int>> v(n);
    for(int i=0;i<t;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            if(v[i].first==v[j].first){
                for(int k=0;k<t;k++){
                    
                }
            }
        }
    }
}