#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int a,m=0,c,d;
    string s;
    cin>>s;
    a=s.size();
    for(int i=0;i<(a-1);i++){
        for (int j = 0; j < a-1; j++)
        {
            if(s[j]!='+'){
                if(s[j]>s[j+2]){
                    
                }
            }
        }
        
        m=s[0];
        if(s[i]!='+'){
            if(s[i]<=m){
                m=s[i];
                cout<<m;
            }
            cout<<"+";
        }
    }
    return 0;
}