#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m,h;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr , arr + n);
    for(int i=0;i<n;i++){
        if(k%arr[i]==0){
            int c=arr[i];
            m=arr[i];
        }
    }
    cout<<k/m;
    return 0;
}