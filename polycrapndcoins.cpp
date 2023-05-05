#include<iostream>
using namespace std;
int main()
{
int a,c;
cin>>a;
for (size_t i = 0; i < a; i++)
{
cin>>c;
if (c%3==0)
{
   int x,y;
   x = c/3;
   y = (c/3);
   cout<<x<<" "<<y<<endl;
}
else if (c%3==1)
{
   int x,y;
   x = (c/3)+1;
   y = (c/3);
   cout<<x<<" "<<y<<endl;  
}
else
{
    int x,y;
    x = c/3;
    y = ((c/3))+1;
    cout<<x<<" "<<y<<endl;   
}
}
    return 0;
}