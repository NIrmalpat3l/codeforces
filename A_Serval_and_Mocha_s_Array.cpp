#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    int arr[n];
    int ind=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if ( __gcd(arr[i],arr[j])==1 || __gcd(arr[i],arr[j])==2 ){
                cout<<"Yes";   
                ind=1;
                break;
            }
        }
        if(ind==1){
            break;
        }
    }
    if(ind==1){
        ind=0;
        return;
    }
    cout<<"No";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
    return 0;
}