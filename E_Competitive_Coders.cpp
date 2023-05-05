// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int j=0;
    int m=pow(10,9) + 7;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0 || i==1){
            cout<<a[i]<<" ";
        }else{
            if(n>=2){    
                cout<<(a[i]*(a[i-1]+a[i-2])) % m<<" ";
                a[i]=(a[i]*(a[i-1]+a[i-2]));
            }
        }
    }
    return 0;
}
// if(n==2){
// }else{
    // cout<<(a[i]*(a[i-1]+a[i-2])) % m<<" ";
                    // a[i]=(a[i]*(a[i-1]+a[i-2]));
                // }