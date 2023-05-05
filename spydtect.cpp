#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int s,l;
        cin>>s;
        int a[s];
        for(int j=0;j<s;j++){
            cin>>a[j];
        }
        for(int k=0;k<s;k++){
            if(a[k]==a[k+1]){
                if(a[k]!=a[k+2]){
                    cout<<a[k+2];
                }
            }else{
                if(a[k]==a[k+2]){
                    cout<<a[k+1];
                }else{
                    cout<<a[k];
                }
            }
        }
    }
    return 0;
}