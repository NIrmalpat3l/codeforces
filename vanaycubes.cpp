#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0,sum=0,total=0;
    for(int i=1;i<=n;i++){
        total+=i;
        sum+=total;
        if(sum==n){
            cnt++;
            break;
        }else if(sum>n){
            break;
        }else{
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}