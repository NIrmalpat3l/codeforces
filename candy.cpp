#include<iostream>
using namespace std;
int main()
{

int a,x;
cin>>a;
for (int i = 0; i < a; i++)
{
    cin>>x;
if (x%2==0)
{
    cout<<(x/2-1)<<endl;
}
else if (x==1||x==2)
{
    cout<<"0"<<endl;
}
else
{
    cout<<(x/2)<<endl;
}

}
    return 0;
}