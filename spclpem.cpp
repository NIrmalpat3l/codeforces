#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        ar[i]=i+1;
    }
    sort(ar,ar+n,greater<int>());
    if(n%2){
        swap(ar[n/2],ar[0]);
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
    return 0;
}