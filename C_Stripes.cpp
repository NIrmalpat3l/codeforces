// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    char a[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
    int R=0,B=0,d=0;
    for (int i=0;i<8;i++){
        R=0;
        for (int j=0;j<8;j++){
            if(a[i][j]=='R'){
                R++;
            }
            if(R==8){
                d++;
                break;
            }
        }
    }
    if(d>0){
        cout<<"R";
    }else{
        cout<<"B";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}