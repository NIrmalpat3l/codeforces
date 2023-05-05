// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,a[n],arr[n];
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     for(int k=1;k<=n;k++){
//         cout<<a[k]<<" ";
//     }
//     for(int m=1;m<=n;m++){
//         for(int j=1;j<=n;j++){
//             if(a[j]==m){
//                 arr[m]=j;
//             }
//         }
//     }
//     for(int k=1;k<=n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//   int n, a[n], arr[n];
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//     {
//       cin >> a[i];
//     }
//   for (int m = 1; m <= n; m++)
//     {
//       for (int j = 1; j <= n; j++)
// 	{
// 	  if (a[j] == m)
// 	    {
// 	      cout << j << " ";
// 	    }
// 	}
//     }
//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int j = 1; j <= n; j++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == j)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
