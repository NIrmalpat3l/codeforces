#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int d=240-b;
    int sum=0,c=0;
    for(int i=1;i<=a;i++){
            sum = sum + i*5;
            if(sum>d){
                break;
            }
            c=c+1;
    }
    cout<<c;
    return 0;
}