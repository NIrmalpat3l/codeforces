#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr , arr + n);
        for(int k=0;k<n-1;k++){
            if((arr[k+1] - arr[k])==1 || (arr[k+1] - arr[k])==0){
                c=c+1;
            }
        }
        if((c+1)==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}