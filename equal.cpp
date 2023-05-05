#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int m=a[0];
        for(int i=0; i<n; i++){
            if(a[i]<m){
                m=a[i];
            }
        }
        long long int d=0;
        for(int i=0; i<n; i++){
            d += abs(m-a[i]);
        }
        cout<<d<<endl;
    }
    return 0;
}