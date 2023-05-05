#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a;
    string x;
    cin>>x;
    for (int i = 0; i < a; i++){
        if (x[i]==x[i+1])
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}