// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1;
//     int i=1,j=0;
//     while(i<=s1.length()){
//         s2[j]=s1[i];
//         j++;
//         i+=2;
//     }
//     sort(s2.begin(),s2.end());
//     cout<<s2;
//     for(int k=0;k<s1.length();k++){
//         if(k%2==0){
//             cout<<s2[k];
//         }else{
//             cout<<"+";
//         }
//     }
//     cout<<s2;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j;
    for(i=0; i<s.size(); i+=2)
    {
        for(j=0; j<s.size()-1; j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<endl;
}