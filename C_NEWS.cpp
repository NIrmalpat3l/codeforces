// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char a[]={'E','S','W','N'};
    int j=0;
    char pos;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(j==3){
                j=0;
                pos=a[j];
                // cout<<pos<<": 11 ";
            }else{
                j++;
                pos=a[j];
                // cout<<pos<<": 12 ";
            }
        }else{    
            if(j==0){
                j=3;
                pos=a[j];
                // cout<<pos<<": 21 ";
            }else{
                j--;
                pos=a[j];
                // cout<<pos<<": 22 ";
            }
        }
    }
    cout<<pos;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}