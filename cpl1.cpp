#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            c++;
        }
    }
    if(c==n-1) cout<<"NO";
    else cout<<"YES";
    return 0;
}
// #define mod 1000000007
// #define ll long long
// #define ull unsigned long long
// #define cy cout << "YES" << endl
// #define cn cout << "NO" << endl
// #define pb push_back
// #define ff first
// #define ss second
 
// // #include <boost/multiprecision/cpp_int.hpp>
// #include <bits/stdc++.h>
// #include <map>
// using namespace std;
 
// void solve()
// {
//   int n, m;
//   cin >> n >> m;
//   int x = 0;
//   for (int i = 0; i < n; i++)
//   {
//     int a;
//     cin >> a;
//     if (a != -1)
//     {
//       x ^= a;
//     }
//   }
//   cout << (m ^ x) << endl;
// }
 
// int32_t main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   int t = 1;
//   cin >> t;
//   for (int i = 0; i < t; i++)
//   {
//     // cout << "Case" << i << ": ";
//     solve();
//   }
//   return 0;
// }