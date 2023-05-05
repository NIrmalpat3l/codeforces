#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,c=0;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
        sum = sum + a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    sort(a2 , a2 + n);
    if(sum<=(a2[n-2]+a2[n-1])){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}