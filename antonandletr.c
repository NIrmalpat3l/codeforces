#include<stdio.h>
int main()
{
    char arr[100];
    for( int i=0;arr[i]!='}';i++){
        scanf("%c",&arr[i]);
    }
    for(int j=0;arr[j]!='}';j++){
        printf("%c",arr[j]);
    }
    return 0;
}