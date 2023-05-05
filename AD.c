#include<stdio.h>
int  main()
{
    int n,i,j,a=0,b=0;
    int arr[n];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        arr[n]=x;
    }
    for(j=1;j<=n;j++){
        if(arr[j] == 'A'){
            a+=1;
        }else{
            b+=1;
        }
    }
    if(a>b){
        printf("Anton");
    }else if(a==b){
        printf("friendship");
    }else{
        printf("Danik");
    }
    return 0;
}