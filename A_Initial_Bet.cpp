// Accpted
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    float mean=(a+b+c+d+e)/5.00;
    if((int)mean == mean && mean != 0){
        cout<<mean;
    }else if((int)mean != mean || mean == 0){
        cout<<-1;
    }
}
