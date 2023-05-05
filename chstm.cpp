#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>> n >> m;
    int a[n] ;
    int cnt = 0;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i = 0; i < n; i++)
        if (5 - a[i] >= m)
            cnt++;

    cout<<cnt/3;
    return 0;
}