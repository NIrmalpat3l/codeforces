// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    string s;
    cin>>n>>s;
    int x,y;
    x=y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            x++;
        }else if(s[i]=='D'){
            x--;
        }else if(s[i]=='R'){
            y++;
        }else if(s[i]=='L'){
            y--;
        }
        if(x==1 && y==1){
            cout<<"YES";
            return;
        }
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