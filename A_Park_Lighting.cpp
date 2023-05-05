// Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int o=a*b;
        if(o%2==0){
            o=o/2;
        }else{
            o=(o/2+1);
        }
        cout<<o<<endl;
    }
    return 0;
}