// #include<iostream>
// #include<string>
// #include<string.h>
// using namespace std;
// int main(){
//     int c=0,n;
//     cin>>n;
//     string s;
//     cin>>s;
//     for(int i=0;i<s.length();i++){
//         s[i]=tolower(s[i]);
//         for(char j='a';j<='z';j++){
//             if(s[i]==j){
//                 c++;
//             }
//         }
//     }
//     if(c!=s.length()) cout<<"NO";
//     else if(c<26) cout<<"NO";
//     else cout<<"YES";
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0; i<a; i++)
    {
        s[i]=towlower(s[i]);
    }
    sort(s.begin(),s.end());//to arrang in a to z
    for(int i=0; i<a; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count==26)
        cout<<"YES";
    else
        cout<<"NO";
}