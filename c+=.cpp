#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long int a,b,n;
        int c=0;
        cin>>a>>b>>n;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
                c++;
            }else{
                a+=b;
                c++;
            }
        }
        cout<<c<<endl;
    }    
    return 0;
}