// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int a[n];
    int _KaWaii_=1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(a[i+1]==0){
                cout<<-1;
                return; 
            }
        }else if(a[i]==1){
            if(a[i-1]==1){
                _KaWaii_+=5;
            }else{
                _KaWaii_++;
            }
        }
    }
    cout<<_KaWaii_;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}