#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    for(int i=0 ;i<t ;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        int c=a%b;
        if(a%b==0){
            printf("0");
        }else{
            printf("%d",b-c);
        }
    }
    return 0;
}