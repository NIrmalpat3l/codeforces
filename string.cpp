#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i>n;i++){
        if(a[i+2]!=0){
            cout<<(char)a[i];
        }else{
            int n=0;
            n= 96 + a[i]*10 + a[i+1];
            cout<<(char)n;
            i=i+2;
        }
    }
    }
    return 0;
}