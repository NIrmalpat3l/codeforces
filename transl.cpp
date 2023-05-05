#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int c=0;
    cin>>s1;
    cin>>s2;
    int l=s1.length();
    for(int i = 0 ; i < l ; i++){
        if(s2[i]!=s1[l-i-1]){
            c++;
        }

    }
    if(c!=0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}