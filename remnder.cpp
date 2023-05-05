// #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
// #include<iostream>
// using namespace std;
// int main(){
//     fastread()
//     int t;
//     cin>>t;
//     while(t--){
//         long long int x,y,n,c=0;
//         cin>>x>>y>>n;
//         while(n>=0){
//             if(n%x == y){
//                 cout<<n<<endl;
//                 break;
//             }
//             n--;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long x,y,n,cndx;
        cin>>x>>y>>n;
        cndx=(n/x) * x;
        if(cndx+y <=n)
        {
            cout<<cndx+y<<'\n';
        }
        else
        {
            cout<<cndx-abs(y-x)<<'\n';
        }
    }
    return 0;
}