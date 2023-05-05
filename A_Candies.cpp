// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n;
    cin>>n;
    int y=1,a;
    for(int i=1;i<10000;i++){
        a=pow(2,i);
        y+=a;
        if(n==y){
            cout<<"1";
            return;
        }else if(n%y==0){
            cout<<n/y;
            return;
        }
        
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
