#include<stdio.h>
int main()
{
    int n,x,x1,x2,x3,x4,i,r;
    scanf("%d",&n);
    x=n;
    while(n==0){}
    while(x1!= x2 && x2!=x3 && x3!=x4 && x4!=x1)
    {
    
    }
    x1=x%10;
    x2=((x-x1)/10)%10;
    x3=(x-x1-(x2*10))%10;
    x4=x-(x3*100)-(x2*10)-x1;
}