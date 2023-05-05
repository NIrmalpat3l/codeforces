// Accepted
#include <bits/stdc++.h>
using namespace std;
void code(){
    string t;
    cin>>t;
    char c;
    cin>>c;
    bool f=1;
    int index=0;
    for(int i=0;i<t.size();i++){
        if (t[i]==c && (i+1)%2==1){
            cout<<"YES"<<endl;
            f=0;
            return;
        }
    }
    if (f==1){
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        code();
        cout<<endl;
    }
    return 0;
}