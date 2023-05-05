// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0 ){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    // int flg=-1;
    // for(int i=1;i<=n;++i){
    //     int x=i;
    //     while(x>0){
    //         int r=x%10;
    //         if((r == 4) || (r == 7)){
    //             x=x/10;
    //         }else{
    //             flg=0;
    //             break;
    //         }
    //     }
    //     if(flg!=0){
    //         if((n % i) == 0){
    //             cout<<"YES";
    //             return 0;
    //         }
    //     }
        
    // }
}