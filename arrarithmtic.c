#include<stdio.h>
int main()
{
    int a,b;
    float d;
    scanf("%d",&a);
    for (int i = 0; i < a; i++){  
        int c=0;
        scanf("%d",&b);
        int arr[b];
        for (int i = 0; i < b; i++){
                scanf("%d",&arr[i]);
                c = c + arr[i];
            }
        d=(float)c/b;
        if (d==1){
                printf("0\n");
            }else{   
                int count = 1;
                while ((count + b - c)<0)
                {
                    count++;
                }
                printf("%d\n",count);
            } 
    }
    return 0;
}