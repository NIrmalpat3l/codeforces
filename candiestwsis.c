#include<stdio.h>
int main()
{
    int x,n,d;
    scanf("%d",&x);
    for(int i=0; i<x ;i++){
        scanf("%d",&n);
        d=(int) (n/2);
        if(n%2==0){
            d-=1;
        }else if(n==1 || n==2){
            d=0;
        }
        printf("%d\n",d);
    }
    return 0;
}