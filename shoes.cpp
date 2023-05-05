#include<iostream>
using namespace std;
int main(){
    long long int a[4],c=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
 
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i]==a[j] && i!=j){
                c++;
            }
        }
    }
    if(c==12) cout<<"3";
    else if(c==6) cout<<"2";
    else if(c==4) cout<<"2";
    else if(c==2) cout<<"1";
    else if(c==0) cout<<"0";
    return 0;
}