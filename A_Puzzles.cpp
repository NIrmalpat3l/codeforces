// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int a[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
    }
    sort(a , a+p);
    int mn=1000;
    for(int i=0;i<p-n+1;i++){
        if(abs(a[i]-a[i+n-1])<mn){
            mn=abs(a[i]-a[i+n-1]);
        }
    }
    cout<<mn;
}