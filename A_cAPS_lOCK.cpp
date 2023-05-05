// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int flag_u=0,flag_l=0;
    int len1=0,len2=0;
    int n=s.length();
    if(n==1){
        if(isupper(s[0])){
            cout<<(char)tolower(s[0]);
        }else{
            cout<<(char)toupper(s[0]);
        }
        return 0;
    }
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            len1++;
            flag_u=i;
        }
        if(islower(s[i])){
            len2++;
            flag_l=i;
        }
    }
    if((len1==n-1 && len2==1 && flag_u==n-1 && flag_l==0) || (len1==n && flag_u==n-1)){
        for(int i=0;i<n;i++){
            if(len1==n){
                s[i]=(char)tolower(s[i]);
            }else{
                if(i==0){
                    s[i]=(char)toupper(s[i]);
                }else{
                    s[i]=(char)tolower(s[i]);
                }
            }
        }
        cout<<s;
        return 0;
    }else if(len1==1 && len2==n-1 && flag_u==0 && flag_l==n-1){
        cout<<s;
        return 0;
    }
    cout<<s;
    return 0;
}