#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d1,d2,d3,d4;
    cin>>n;
    for(int i=n+1;i<9999;i++){
        n++;
        d1=n/1000;
        d2=n/100;
        d2=d2%10;
        d3=n/10;
        d3=d3%10;
        d4=n%10;
        if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4){
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}