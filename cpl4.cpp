#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=-1){
                x=x^a[i];
            }
        }
        int y=0;
        y=x^p;
        cout<<y<<endl;
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//    int t;
//    cin >> t;
//    int ans[t];
//    for (int i = 0; i < t; i++)
//    {
//       int n, p;
//       cin >> n >> p;
//       int a[n];
//       for (int j = 0; j < n; j++)
//       {
//          cin >> a[j];
//       }
//       int temp = 0;
//       for (int j = 0; j < n; j++)
//       {
//          if (a[j] == -1)
//          {
//             continue;
//          }
//          else
//          {
//             temp = temp ^ a[j];
//          }
//       }
//       // cout<<temp;
//       ans[i]=0;
//       ans[i] = p ^ temp;
//    }
//    for (int i = 0; i < t; i++)
//    {
//       cout << ans[i]<<endl;
//    }
// }