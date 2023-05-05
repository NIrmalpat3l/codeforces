#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1,c2,c3,c4;
    c1=c2=c3=c4=0;
    int taxi=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            c1++;
        }else if(a[i]==2){
            c2++;
        }else if(a[i]==3){
            c3++;
        }else{
            c4++;
        }
    }
    taxi+=c4;
    taxi+=c3;
    taxi+=c2/2;
    c1-=c3;
    c2=c2%2;
    if(c2==1){
        c1-=2;
        taxi++;
    }
    if(c1>0){
        taxi+=((c1+3)/4);
    }
    cout<<taxi<<endl;
    return 0;
}
