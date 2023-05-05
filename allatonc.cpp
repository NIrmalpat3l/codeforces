#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0; i < 14; i++){
        if(a==arr[i] && b==arr[i+1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
