// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,sum2=0,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(n==1){
        cout<<"1";
        return 0;
    }
    sort(a, a+n, greater<int>());
    for(int i=0;;i++){
        ++cnt;
        sum2+=a[i];
        sum-=a[i];
        if(sum2>sum){
            cout<<endl<<cnt;
            return 0;
        }
    }
}