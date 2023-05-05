#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int d=0;
    for(int i='a';i<='z';i++){
        int c=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==i){
                c++;
            }
        }
        if(c>0){
            d++;
        }
    }
    cout<<d;
    return 0;
}
// int c=0,d=0;
//     for(int i=0; i<(s.length()); i++){
//         if( i%2 != 0){
//             s2[d]=s[i];
//             d++;
//         }
//     }
//     cout<<s2;
//     sort(s2.begin(),s2.end());
//     for(int i=0; i<(s2.length()-1); i++){
//         if(s2[i]!=s2[i+1]){
//             c++;
//         }
//     }
//     cout<<c;