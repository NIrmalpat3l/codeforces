// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,g=0;
    cin>>n;
    string s,team;
    while(n--){
       if(g==0){
            cin>>team;
            g=1;
        }else{
            cin>>s;
            if (s==team){
                g+=1;
            }else{
                g-=1;
            }
        } 
    }
    cout<<team;
    return 0;
}
