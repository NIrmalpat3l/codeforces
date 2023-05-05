// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int x=n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int k=0;k<n;k++){
        int m;
        cin>>m;
        string s;
        cin>>s;
        int c=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='D'){
                if(a[k]==9){
                    a[k]=0;
                }else{
                    a[k]++;
                }
            }else{
                if(a[k]==0){
                    a[k]=9;
                }else{
                    a[k]--;
                }
            }
        }
        cout<<a[k]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}