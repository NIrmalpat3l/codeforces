#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int x=0,y=0;
    for (int i = 0; i < n; i++){
        cin>>a;
        cin>>b;
        if (a>b){
            x++;
        }else if (a<b){
            y++;
        }
    }
    if (x>y){
        cout<<"Mishka";
    }else if (x==y){
        cout<<"Friendship is magic!^^";
    }else{
        cout<<"Chris";
    }
    return 0;
}