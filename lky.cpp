#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for (int i = 0; i < t; i++){
        cin>>s;
        int s1=0,s2=0;
        s1=s[0]+s[1]+s[2];
        s2=s[3]+s[4]+s[5];
        if(s1==s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}