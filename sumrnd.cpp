#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c=0,j=0,a[100];
        cin>>n;
        int x=n;
        while(x>0){
            a[j]=x%10;
            if(a[j]!=0){
                c++;
            }
            x=x/10;
            j++;
        }
        cout<<c<<endl;
        for(int k=0;k<j;k++){
            if(a[k]!=0){
                cout<<(a[k])*(pow(10,k))<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
