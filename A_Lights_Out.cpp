// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            if(x%2){
                a[i][j]=!a[i][j];
                if(i==0 && j==0){
                    a[i+1][j]=!a[i+1][j];
                    a[i][j+1]=!a[i][j+1];
                }else if(i==1 && j==0){
                    a[i+1][j]=!a[i+1][j];
                    a[i-1][j]=!a[i-1][j];
                    a[i][j+1]=!a[i][j+1];
                }else if(i==2 && j==0){
                    a[i-1][j]=!a[i-1][j];
                    a[i][j+1]=!a[i][j+1];
                }else if(i==1 && j==1){
                    a[i+1][j]=!a[i+1][j];
                    a[i-1][j]=!a[i-1][j];
                    a[i][j+1]=!a[i][j+1];
                    a[i][j-1]=!a[i][j-1];
                }else if(i==2 && j==1){
                    a[i-1][j]=!a[i-1][j];
                    a[i][j-1]=!a[i][j-1];
                    a[i][j+1]=!a[i][j+1];
                }else if(i==2 && j==2){
                    a[i-1][j]=!a[i-1][j];
                    a[i][j-1]=!a[i][j-1];
                }else if(i==0 && j==1){
                    a[i+1][j]=!a[i+1][j];
                    a[i][j+1]=!a[i][j+1];
                    a[i][j-1]=!a[i][j-1];
                }else if(i==0 && j==2){
                    a[i+1][j]=!a[i+1][j];
                    a[i][j-1]=!a[i][j-1];
                }else if(i==1 && j==2){
                    a[i+1][j]=!a[i+1][j];
                    a[i-1][j]=!a[i-1][j];
                    a[i][j-1]=!a[i][j-1];
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}