// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e,o,pe,po;
    e=o=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2){
            e++;
            pe=i+1;
        }else{
            o++;
            po=i+1;
        }
    }
    if(e>o) cout<<po;
    else cout<<pe;
}