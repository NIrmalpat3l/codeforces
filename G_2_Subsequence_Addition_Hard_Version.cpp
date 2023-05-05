#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int sum=a[0];
    if(a[0]!=1){
        cout<<"NO"<<"\n";
        return;
    }else{
        for(int i=1;i<n;i++){
            if(a[i]<=sum){
                sum+=a[i];
            }else{
                cout<<"NO"<<"\n";
                return;
            }
        }
    }
    cout<<"YES"<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        code();
    }
    return 0;
}