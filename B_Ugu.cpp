#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int _KaWaii_=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            for(int j=i;j<n;j++){
                if((s[j]=='0' && s[j+1]=='1')||(s[j]=='1' && s[j+1]=='0') ){
                    _KaWaii_++;
                }
            }
        break;
        }else{
            continue;
        }
    }
    cout<<_KaWaii_;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
