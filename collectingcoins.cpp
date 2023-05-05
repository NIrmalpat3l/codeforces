#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,t;
        cin>>a>>b>>c>>t;
        long long int m=max(a,max(b,c));
        long long int d=t-((m*3)-(a+b+c));
        if((d%3==0 && d>0) || d==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}