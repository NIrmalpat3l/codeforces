#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        double sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    sum+=(a[i]*a[j]*a[k]);
                }
            }
        }
        cout<<sum<<endl;
    }
}