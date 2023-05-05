#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        tolower(s);
        // for (int j = 0; j < t; j++)
        // {
        //     s[j] = tolower(s[j]);
        // }
        if (s == "yes"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    } 
    return 0; 
} 