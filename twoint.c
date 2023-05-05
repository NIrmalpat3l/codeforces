#include<stdio.h>
int main()
{
    int a,b,m,c,d;
    scanf("%d %d",&a,&b);
    if(a>b){
        if(a%b==0){
            m=a/b;
        }else{
            m=1;
        }
    }if(b>a){
        if(b%a==0){
            m=b/a;
        }else{
            m=1;
        }

    }
    c=a+b;
    if(m==1){
        d=c+1;
    }else{
        d=c*m;
    }
    printf("%d %d",c,d);
    return 0;
}