#include<bits/stdc++.h>
using namespace std;
void code(){
    long long int a,b,c;
    cin>>a>>b>>c;;
    if((b-a)==(c-b)){
        cout<<"YES";
        return;
    }
    if(((2*b)-a)%c == 0 && ((2*b)-a)>0){
        cout<<"YES";
        return;
    }
    if(((2*b)-c)%a == 0 && ((2*b)-c)>0){
        cout<<"YES";
        return;
    }
    if(((a+c)/2)%b == 0 && (a+c)%2 == 0 ){
        cout<<"YES";
        return;
    }
    cout<<"NO";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
// for(int i=1;i<=100;i++){
    //     if((i*a2)==((a3-a1)/2 + a1)){
    //         // cout<<a1<<" "<<i*a2<<" "<<a3;
    //         cout<<"YES";
    //         return;
    //     }else if((a2)==((i*a3)-a1)/2 + a1){
    //         // cout<<a1<<" "<<a2<<" "<<i*a3;
    //         cout<<"YES";
    //         return;
    //     }else if((a2)==((a3-(i*a1))/2 + (i*a1))){
    //         // cout<<i*a1<<" "<<a2<<" "<<a3;
    //         cout<<"YES";
    //         return;
    //     }
    //     c++;
    // }
    // // cout<<c;
    // cout<<"NO";