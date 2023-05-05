// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ind=0;
    string a;
    cin>>a;
    for(int i=0;i<5;i++){
        string b;
        cin>>b;
        if(a[1]==b[1] || a[0]==b[0]){
            cout<<"YES";
            return 0;
        }
        ind++;
    }
    cout<<"NO";
    return 0;
}
