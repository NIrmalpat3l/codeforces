#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,x,m=0,mi=0;
    cin>>n>>k>>x;
    for(int i=0;i<n;i++){
        long long int ar[k];
        for(int j=0;j<k;j++){
            cin>>ar[j];
        }
        sort(ar,ar+k);
        int maxi = ar[k-1];
        int mini = ar[0];
        m=m+maxi;
        mi=mi+mini;
    }
    if(mi>=x){
        cout<<"ALWAYS";
    }else if(m>=x && mi<x){
        cout<<"SOMETIMES";
    }else{
        cout<<"NEVER";
    }
    return 0;
}
