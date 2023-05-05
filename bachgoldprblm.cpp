#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a=n/2;
    cout<<a<<endl;
    if(n%2==0){
        while(a--){
            cout<<2<<" ";
        }
    }else{
        a--;
        while(a--){
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}