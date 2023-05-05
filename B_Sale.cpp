#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,sum=0;
    cin>>a>>b;
    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
        if(ar[i]==0){
            b++;
        }
    }
    sort(ar , ar+a);
    for(int i=0;i<b;i++){
        if(ar[i]<=0){
            sum+=abs(ar[i]);
            
        }
    }
    cout<<sum;
}