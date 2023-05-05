// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            x++;
        }
    }
    cout<<min(x,n-x);
}