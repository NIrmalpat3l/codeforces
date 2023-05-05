#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int bur[t];
    for(int i=0;i<t;i++){
        cin>>bur[i];
    }
    int m=bur[0];
    for(int i=0;i<t;i++){
        if(bur[i]>m){
            m=bur[i];
        }
    }
    int sum=0;
    for(int i=0;i<t;i++){
        sum+=abs(m-bur[i]);
    }
    cout<<sum;
}