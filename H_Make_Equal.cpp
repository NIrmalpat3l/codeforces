#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int p,q,x,y;
    cin>>p>>q>>x>>y;
    int c=0;
    for(int i=0;i<1000;i++){
        if(((p*x) == (q*y))){
            cout<<c;
            return;
        }else{
            x++;
            y++;
            c++;
        }
    }
    cout<<"-1";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}