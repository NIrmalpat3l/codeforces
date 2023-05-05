// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[1]!=a[2])
        cout<<"NO";
    else
        cout<<"YES"<<endl<<a[0]<<" "<<a[0]<<" "<<a[2];;
        
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}