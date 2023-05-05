// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int citi[n];
    for(long long int i=0;i<n;i++) cin>>citi[i];
    sort(citi , citi + n);
    for(long long int i=0;i<n;i++){
        long long int mx,mn;
        if(i==0){
            mn=abs(citi[i]-citi[i+1]);
            mx=abs(citi[i]-citi[n-1]);
        }else if(i==n-1){
            mn=abs(citi[i-1]-citi[i]);
            mx=abs(citi[0]-citi[i]);
        }else{
            mn=min(abs(citi[i-1]-citi[i]),abs(citi[i]-citi[i+1]));
            mx=max(abs(citi[0]-citi[i]),abs(citi[i]-citi[n-1]));
        }
        cout<<mn<<" "<<mx<<endl;
    }
}
// mx=0;
//         mn=100000000000000;
//         for(long long int j=0;j<n;j++){
//             long long int d=0;
//             if(i !=j ){
//                 d=abs(citi[i]-citi[j]);
//                 mx=max(mx,d);
//                 mn=min(mn,d);
//             }  
//         }