#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,h,d;
        cin>>a>>h>>d;
        if((h-a)%d!=0){   
            cout<<(((h-a)/d)+1)<<endl;
        }else{  
            cout<<(h-a)/d<<endl;
        }
    }
    return 0;
}