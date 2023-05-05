#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int m=a[0];
        if(a[3]>a[0] && a[3]>a[1] && a[2]>a[0] && a[2]>a[1]){
            cout<<"NO";
        }else if(a[0]>a[2] && a[0]>a[3] && a[1]>a[2] && a[1]>a[3]){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}