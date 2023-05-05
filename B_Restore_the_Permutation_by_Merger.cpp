#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    for(int i=0;i<2*n;i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
            for(int j=i+1;j<2*n;j++){
                if(a[i]==a[j]){
                    a[j]=0;
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}