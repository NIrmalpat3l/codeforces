#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n,c=0;
        cin>>w>>h>>n;
        for(int i=0; w%2==0 || h%2==0;i++){
            if(w%2==0){
                w/=2;
                c++;
            }else{
                h/=2;
                c++;
            }
        }
        if((pow(2,c))>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}