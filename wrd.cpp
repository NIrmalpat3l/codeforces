#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int a=0,b=0;
    for(int i=0; i< strlen( s ); i++){
        if(isupper(s[i])){
            a++;
        }else if(islower(s[i])){
            b++;
        }
    }
    if(a==b || b>a){
        for(int i=0;i< strlen( s );i++){
            s[i]=tolower(s[i]);
        }
    }else if(a>b){
        for(int i=0;i< strlen( s );i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}