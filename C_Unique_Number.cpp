// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int x;
    cin>>x;
    // if(x<10){
    //     cout<<x;
    //     return;
    // }
    // if(x>45){
    //     cout<<"-1";
    //     return;
    // }
    int i=9;
    int sum=0;
    vector<int>v;
    while(sum<x && i>0){
        v.push_back(min(x-sum,i));
        sum+=i;
        i--;
    }
    if(sum<x){
        cout<<"-1";
        return;
    }else{
        reverse(v.begin(),v.end());
        for(auto j:v){
            cout<<j;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}