// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,k;
    cin>>n>>k;
    int flg=0;
    int c=0;
    if(n%2==0){
        cout<<n+2*(k);
    }else{
        for(int i=3;i<=n;i++){
            if(n%i==0){
                n+=i;
                break;
            }
        }
        cout<<n+2*(k-1);
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
// void code(){
//     int n,k;
//     cin>>n>>k;
//     cout<<n<<" "<<k<<" ";
//     int flg=0;
//     for(int i=2;i<=n;i++){
//         if(n%i == 0){
//             flg=1;
//         }
//         if(flg==1){
//             n+=i;
//             flg=0;
//         }
//     }
//     cout<<n;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         code();
//         cout<<endl;
//     }
// }
// another.....
// label:
    // for(int i=2;i<=n;i++){
    //     if(n%i==0 && c<k){
    //         n+=i;
    //         c++;
    //         if(n%2==0){
    //             cout<<n+2*(k-1);
    //             return;
    //         }
    //         // cout<<n<<":"<<i<<" ";
    //         goto label;
    //     }else if(c>=k){
    //         break;
    //     }
    // }
    // cout<<n;