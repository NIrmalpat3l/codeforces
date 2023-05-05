#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int isec=n*m;
    int cnt=0;
    while((n>0 && m>0) && isec>0){
        n--;
        m--;
        cnt++;
        isec=n*m;
    }
    if(cnt%2 != 0){
        cout<<"Akshat";
    }else{
        cout<<"Malvika";
   }
}