// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int c=0;
//     for(int i=0;i<i.s.length()-2;i++){
//         if(s[i]==x && s[i]==x && s[i+2]==x){
//             c++;
//             i+=3;
//         }
//     }
//     if()
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length()-2;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            c++;
        }
    }
    cout<<c;
    return 0;
}
