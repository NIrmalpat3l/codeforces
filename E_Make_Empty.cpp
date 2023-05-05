#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        if(abs(v[i]-v[i+1])<=2){
            c++;
            i+=1;
        }else{
            c++;
        }
    }
    cout<<c;
}