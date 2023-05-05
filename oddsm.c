#include<stdio.h>
int main()
{
    int arr[3],c=0,d=0;
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<3;j++){
        if(arr[j]%2==0){
            c++;
        }else if(arr[j]%2!=0){
            d++;
        }
    }
    if(c==3 || d==3){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}