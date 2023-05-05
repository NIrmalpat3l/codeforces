#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
        if((a[i][1]-a[i][0])>=2){
            c++;
        }
    }
    cout<<c;
    return 0;
}