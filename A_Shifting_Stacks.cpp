// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int indsum=0;
    long long int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        indsum+=i;
        sum+=a[i];
        if(indsum>sum){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
