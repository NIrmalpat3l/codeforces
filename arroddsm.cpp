// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t,c=0;
//     cin>>t;
//     for(int k=0;k<t;k++){
//         int n;
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         for(int i=0;i<n;i++){
//             if(a[i]%2!=0){
//                 c++;
//             }
//         }
//         if(c%2!=0 && c!=0) cout<<"YES"<<endl;
//         else if(c==0) cout<<"NO"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int a[n],c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                c++;
            }
            sum+=a[i];
        }
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }else if(c<n && c>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

