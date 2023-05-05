// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int a[12];
    int sum=0,c=0;
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    sort(a , a+12 , greater<int>());
    for(int i=0;i<12;i++){
        sum+=a[i];
        c++;
        if(sum>=k){
            break;
        }
    }
    if(k==0){
        cout<<"0";
    }else if(sum < k){
        cout<<"-1";
    }else{
        cout<<c;
    }
    return 0;
}