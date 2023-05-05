#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int ar[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i][0]==ar[j][1] && i!=j){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
