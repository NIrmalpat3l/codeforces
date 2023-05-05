#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
 
    int c = a/100;
    int b = a%100;
 
    c+=b/20;
    b= b%20;
 
    c+= b/10;
    b =  b%10;
 
    c+= b/5;
    b=b%5;
 
    c+=b/1;
 
    cout<<c;
    return 0;
}