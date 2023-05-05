// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int n;
    cin>>n;
    long long int x=n;
    if(n%2!=0){
        cout<<"YES";
        return;
    }else{
        while(x%2==0){
            x/=2;
        }
        if(x==1){
            cout<<"NO";
            return;
        }else{
            cout<<"YES";
            return;
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
}