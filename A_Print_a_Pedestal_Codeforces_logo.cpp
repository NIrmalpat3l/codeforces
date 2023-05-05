// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<n/3<<" "<<(n/3)+1<<" "<<(n/3)-1;
    }else if(n%3==1){
        cout<<(n-1)/3<<" "<<((n-1)/3)+2<<" "<<((n-1)/3)-1;
    }else{
        cout<<((n-2)/3)+1<<" "<<((n-2)/3)+2<<" "<<((n-2)/3)-1;
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