#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum=0;
        int x=n;
        while(x>0){
            i=x%10;
            sum+=i*i*i;
            x=x/10;
        }if(sum==n){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}