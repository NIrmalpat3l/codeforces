#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,neg=0;
    cin>>n;
    long long int a[n],pay=0;
    int zero=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            neg++;
            pay+=-1-a[i];
        }else if(a[i]>0){
            pay+=a[i]-1;
        }
        if(a[i]==0){
            zero++;
        }   
    }
    if(zero>0){
        pay+=zero;
    }else if(zero==0){
        if(neg%2){
            pay+=2;
        }
    }
    cout<<pay;
}