#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int n,t,temp;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j = t; j > 0; j--){
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G'){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}