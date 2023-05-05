// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,cnt=0;
//         cin>>n;
//         string s;
//         cin>>s;
//         for(int j=0;j<n;j++){
//             s[j]=tolower(s[j]);
//         }
//         string s1="meow";
//         for(int i=0;i<4;i++){
//             for(int j=0;j<n;j++){
//                 if(s[j]==s1[i]){
//                     cnt++;
//                 }else{
//                     if(s[j]!=s1[i+1]){
//                         cout<<"NO";
//                         continue;
//                     }
//                 }
//             }
//         }
//         if(cnt==n && n>=4){
//             cout<<"YES";
//         }else{
//             cout<<"NO";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] = tolower(a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[0] != 'm')
            {
                flag = 1;
                break;
            }
            if (n < 4)
            {
                flag = 1;
                break;
            }

            if (a[i] == 'm')
            {
                if (a[i + 1] == 'e' || a[i + 1] == 'm')
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (a[i] == 'e')
            {
                if (a[i + 1] == 'o' || a[i] == 'e')
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (a[i] == 'o')
            {
                if (a[i + 1] == 'w' || a[i + 1] == 'o')
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (a[i] == 'w')
            {
                if (a[i + 1] == 'w')
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}