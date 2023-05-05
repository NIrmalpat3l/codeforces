#include<iostream>
using namespace std;
int main(){
    int n,h,c=0;
    cin>>n;
    cin>>h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<=h){
            c++;
        }else{
            c+=2;
        }
    }
    cout<<c;
    return 0;
}