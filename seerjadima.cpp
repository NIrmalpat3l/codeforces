#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s,d;
    s=d=0;
    if(n==1){
        cout<<a[0]<<" "<<0;
        return 0;
    }
    int c=0;
    while(n>0){
        if(c%2==0){
            if(a[0] > a[n-1]){
                s+=a[0];
                n--;
                c++;
                for(int i=0;i<n;i++){
                    a[i]=a[i+1];
                }
            }else{
                s+=a[n-1];
                n--;
                c++;
                // for(int i=0;i<n;i++){
                //     a[i]=a[i];
                // }
            }
        }else{
            if(a[0]>a[n-1]){
                d+=a[0];
                n--;
                c++;
                for(int i=0;i<n;i++){
                    a[i]=a[i+1];
                }
            }else{
                d+=a[n-1];
                n--;
                c++;
                // for(int i=0;i<n;i++){
                //     a[i]=a[i];
                // }
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}