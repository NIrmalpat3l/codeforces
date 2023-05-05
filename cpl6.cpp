#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int c=0,diff=d;
    for(int i=0;i<n;i++){
        if(diff>=a[i]){
            diff-=a[i];
        }else{
            diff=d;
            c++;
            // i=i-1;
        }
    } 
    cout<<c;
    return 0;
}
//    diff-=a[i];
    //     if(diff<0 || diff<a[i+1]){
    //         c++;
    //         diff=d;
    //     }