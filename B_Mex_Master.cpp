#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int a[n];
    int b[n-1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zero++;
        }
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
// for(int i=0;i<n-1;i++) b[i]=a[i]+a[i+1];
//     for(int i=0;i<n-1;i++) cout<<b[i]<<" ";
//     cout<<endl;
//     sort(b,b+n-1);
//     if(b[0]!=0){
//         cout<<"0";
//         return;
//     }
//     for(int i=0;i<n-2;i++){
//         if(abs(b[i]-b[i+1])>1){
//             cout<<b[i]+1;
//             return;
//         }
//     }
//     cout<<b[n-2]+1;