#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,c=0;
        cin>>n;
        long long int a[n];
        long long int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long int m1=a[0];
        long long int m2=b[0];
        for(int i=0;i<n;i++){
            if(m1>a[i]){
                m1=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(m2>b[i]){
                m2=b[i];
            }
        }

        long long int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]>=m1 || b[i]>=m2){
                if((a[i]-m1)>=(b[i]-m2)){
                    cnt+=a[i]-m1;
                }else{
                    cnt+=b[i]-m2;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
                // if((a[i]-m1)>0){
                // a[i]--;
                // }
                // if((b[i]-m2)>0){
                    // b[i]--;
                // }
                // cnt++;