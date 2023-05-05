#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,temp,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=0){
            temp=i+1;
        }
    }
    int x1[n-1],x2[n-1];
    for(int i=1;i<n;i++){
        cin>>x1[i]>>x2[i];
        if(x1[i]==temp){
            ans++;
        }
    }
    cout<<ans;
}