#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        if(a[i]<0){
           if(b == 0){
                c++;
            }else{
                b--;
            } 
        }else{
            b+=a[i];
        }
    }
    
    cout<<c;
    return 0;
}