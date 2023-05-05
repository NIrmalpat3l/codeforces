#include<iostream>
using namespace std;
int main()
{
    int k,n,w,d;
    cin>>k;
    cin>>n;
    cin>>w;
    int s=0;
    for (int  i = 1; i <= w; i++)
    {
        s=s+k*i;
    }
    d=s-n;
    if (d>0)
    {
        cout<<s-n;
    }else if(d==0 || d<0){
        cout<<"0";
    }
    return 0;   
}