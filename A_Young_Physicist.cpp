// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    for(int i=0;i<n;i++){
        long long int x,y,z;
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1==0 && sum2==0 && sum3==0) cout<<"YES";
    else cout<<"NO";
}