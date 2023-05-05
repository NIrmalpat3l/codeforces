#include<stdio.h>
int main()
{
    int n,k,i,x;
    //scanf("%d %d",&n,&k);
    scanf("%d",&n);
    scanf("%d",&k);
    x=n;
    for(i=1;i<=k;i++)
    {
        if(x%10!=0){
            x-=1;
        }else{
            x/=10;
        }
    }
    printf("%d",x);
    return 0;
}