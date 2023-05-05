#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,c=0;;
    cin>>n>>m;
    int a[n][2];
    for(long long int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    for(long long int i=0;i<n;i++){
        if(a[i][1]>=a[i+1][0]){
            c++;
        }
    }
    if(c==(n-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}