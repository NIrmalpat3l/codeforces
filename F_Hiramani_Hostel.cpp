#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    int sum=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum-24;
}