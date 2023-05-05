#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   string s;
        cin>>s;
        int l=s.size();
        cout<<s[0];
        for(int i=1;i<l-1;i+=2){
            if(s[i]==s[i+1]){
                cout<<s[i];
            }
        }
        cout<<s[l-1]<<endl;
    }
    return 0;
}