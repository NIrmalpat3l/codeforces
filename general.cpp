#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0,y=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    for(int i=0; i<n; i++ ){
        if(a[i]>max){
            max=a[i];
            x=i+1;
        }
        if(a[i]<=min){
            min=a[i];
            y=i+1;
        }
    }
    // cout<<max<<" "<<min<<" "<<y<<" "<<x<<endl;
    if(x==0){
        x++;
        cout<<n-y;
    }else if(y>x){
        cout<<x-1+n-y;
    }else{
        cout<<x-1+n-y-1;
    }
    return 0;
}