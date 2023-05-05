// #include<iostream>
// #include<string>
// #include<string.h>
// using namespace std;
// int main()
// {
//     string s1,s2;
//     int a=0,b=0;
//     cin>>s1;
//     cin>>s2;
//     for(int i=0;i<s1.length();i++){
//         s1[i]=toupper(s1[i]);
//         s2[i]=toupper(s2[i]);
//     }
//     for(int i=0;i<s1.length();i++){
//         if(s1[i]>s2[i]){
//             a++;
//         }else if(s1[i]<s2[i]){
//             b++;
//         }
//     }
//     if(a==b){
//         cout<<"0";
//     }else if(a==0 && b==0){
//         cout<<"0";
//     }else if(a>b){
//         cout<<"1";
//     }else if(b>a){
//         cout<<"-1";
//     }
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int i;
    cin>>a>>b;
    for(i=0; i<a.size(); i++)
    {
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
    }
    if(a==b)
        cout<<"0"<<endl;
    else
    {
        for(i=0; i<a.size(); i++)
        {
            if(a[i]<b[i])
            {
                cout<<"-1"<<endl;
                break;
            }
            if(a[i]>b[i])
            {
                cout<<"1"<<endl;
                break;
            }
        }
    }
    return 0;
}