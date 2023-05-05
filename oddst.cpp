#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,e,o;
    e=o=0;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        if(x%2){
            e++;
        }else{
            o++;
        }
    }
    if(e==o)
        cout<<"YES";
    else
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