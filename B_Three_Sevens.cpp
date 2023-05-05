#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        for(int j=0;j<l;j++){
            int x;
            cin>>x;
            v[i].pushback(x);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<v[i].size();k++){
                if()
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}