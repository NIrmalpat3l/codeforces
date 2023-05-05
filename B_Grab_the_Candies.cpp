// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,c=0,d=0,even=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==1){
            even+=a[i];
        }else{
            sum+=a[i];
        }
    }
    if(even<sum){
        cout<<"YES";
    }else{
        cout<<"NO";
    }   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}
