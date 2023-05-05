#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int steps=0;
    int x=0,y=0,cnt=0;
    for(int i=0;i<s.length();i++){
        x=(int)s[i]-96;
        if(i==0){
            steps+=min(abs(x)-1,26-abs(x));
            // cout<<min(abs(x)-1,26-abs(x))<<" ";
            if(x>13){
                steps++;
            }
        }else{
            y=(int)s[i-1]-96;
            steps+=min(abs(x-y),26-abs(x-y));
            // cout<<min(abs(x-y),26-abs(x-y))<<" ";
        }
    }
    cout<<endl;
    cout<<steps;
}