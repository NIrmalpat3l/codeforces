#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }for(int j=0;j<a;j++){
        if(j>=1 && j<=(a-1)){
            arr[j]=(-1)*arr[j];
            arr[j+1]=(-1)*arr[j+1];
        }

    }for(int k=0;k<a;k++){
        b+=arr[k];
    }
    printf("%d",b);
    return 0;
}