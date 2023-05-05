// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ar[6]={a+b+c,a*b*c,a*(b+c),(a+b)*c,a+b*c,a*b+c};
    int mx=*max_element(ar,ar+6);
    cout<<mx<<endl;
    return 0;
}