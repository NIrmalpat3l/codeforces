#include<bits/stdc++.h>
using namespace std;
int mian(){
    int n;
    cin>>n;
    int std[n];
    for(int i=0;i<n;i++){
        cin>>std[i];
    }
    int a=0,b=0,c=0,d=0;;
    for(int i=0;i<n;i++){
        if(std[i]==1 || std[i]==2 || std[i]==3){
            a++;
        }
    }
    if(a<3) cout<<"0";
    else cout<<a/3;
    for(int i=0;i<n;i++){
        
    }
}