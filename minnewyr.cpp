#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m,time=0;
        cin>>h>>m;
        if(m==0){
            time+=(24-h)*60;
            cout<<time<<endl;
            continue;
        }else{
            time=(23-h)*60;
            time+=60-m;
            cout<<time<<endl;
        }
    }
    return 0;
}