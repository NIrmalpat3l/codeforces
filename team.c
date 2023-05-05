#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    int arr[3];
    for(int i=0; i<n; i++)
    {   int c=0;
        for(int j=0; j<3; j++){
            scanf("%d",&arr[j]);
            c += arr[j];
        }
        if(c>=2){
            a++;
        }
    }
    printf("%d",a);
    return 0;
}