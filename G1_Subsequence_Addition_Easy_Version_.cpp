#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=1;
    if(a[0]!=1){
        cout<<"NO"<<"\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(a[i]<=sum){
            sum+=a[i];
            continue;
        }else{
            cout<<"NO"<<"\n";
            return;
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
