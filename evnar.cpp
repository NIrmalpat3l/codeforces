#include<bits/stdc++.h>
using namespace std;
void code();
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
}
void code(){
    int n,e,o,d=0;
    cin>>n;
    e=o=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(i%2 != a%2){
            if(a%2==0){
                e++;
            }else{
                o++;
            }
        }
    }
    if(e==o){
        cout<<e<<endl;
    }else{
        cout<<"-1"<<endl;
    }
                
}