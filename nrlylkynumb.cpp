#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int c=0;
    for (int i = 0; i < l; i++)
    {
        if(s[i]=='4' || s[i]=='7'){
            c=c+1;
        }
    }
    if(l==1){
        cout<<"NO";
    }else if(c==4 || c==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
    
}