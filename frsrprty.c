#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    for(int i=0;i<2;i++){
        int arr[2];
        for(int j=0;j<2;j++){
        scanf("%d",&arr[j]);
        }
    b = arr[0];
    c = arr[1];
    if((b-c)%4==0){
        d=(b-c)/4;
    }else{
        d=((b-c)/4)+1;
    }if(c>b || b==c){
        printf("0\n");
    }else{
        printf("%d\n",d);
    }
    }
    return 0;
}