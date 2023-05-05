// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    string s,s1;
    int a,b,sum=0;
    cin>>s;
    cin>>s1;
    if(s1.length()==1){
        cout<<"0";
    }else{
        for(int i=0;i<s1.length()-1;i++){
            for(int j=0;j<s.length();j++){
                if(s1[i]==s[j]){
                    a=j;
                }
                if(s1[i+1]==s[j]){
                    b=j;
                }
            }
            sum+=abs(a-b);
        }
        cout<<sum;
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