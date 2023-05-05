#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=abs(a-b);
        if(a<=2*d && b<=2*d && c<=2*d){
            if(c+d<=2*d){
                cout<<c+d;
            }else{
                cout<<c-d;
            }
        }else{
            cout<<"-1";
        }
        cout<<endl;
    }
}