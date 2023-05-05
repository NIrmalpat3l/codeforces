#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int j=0;j<n;j++){
        if(a[j]!=a[j+1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}