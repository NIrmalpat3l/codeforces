// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int a,b;
//     cin>>a>>b;
//     float c;
//     int flag=0;
//     if(a==1){
//         cout<<"1";
//         return 0;
//     }
//     if(a%2){
//         if(a==b){
//             cout<<b-1;
//             return 0;
//         }
//         flag=1;
//         if(b <= a/2 + 1){
//             cout<<2*b-1;
//         }else{
//             c=b - ((float)(float) a/2);
//             cout<<(int) c*2;
//         }
//     }else{
//         if(a==b){
//             cout<<a;
//             return 0;
//         }
//         flag=2;
//         if(b <= a/2){
//             cout<<2*b-1;
//         }else{
//             cout<<(b-(a/2))*2;
//         }
//     }
//     return 0;
// }
// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n;
    cin>>k;
    long long a;
    if(n%2==0){
        a=(n/2);
    }else{
        a=(n/2)+1;
    }
    if(k<=a){
        cout<<1+((k-1)*2);
    }else{
        cout<<2+((k-a-1)*2);
    }
    return 0;
}