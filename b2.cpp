#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h=0,c;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    c=abs(a[0]-a[1]);
    for(int i=0;i<n;i++){
        int d=abs(a[i]-a[i+1]);
        if(c>=d){
            c=d;
        }
    }
    for(int i=0;i<n;i++){
        if(abs(a[i]-a[i+1])==c){
            h++;
        }
    }
    cout<<c<<h;
    return 0;
}