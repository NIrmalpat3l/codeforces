#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,c=0;
    cin>>m>>n;
    // char arr[m][n];
    // int c=0;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //         if(arr[i][j] == 'W' || arr[i][j] == 'B'){
    //             c++;
    //         }
    //     }
    // }
    // if(c!=m*n) cout<<"#Black&White";
    // else cout<<"#Color";
    char color;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>color;
            if(color=='C'||color=='M'||color=='Y'){
                c=1;
            }
           
        }
        if(c==1){
            break;
        }
    }
    if(c==1){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}