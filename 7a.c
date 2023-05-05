#include<stdio.h>
int unionarr(int a[],int m,int b[],int n);
int intersectionarr(int a[],int m,int b[],int n);
int main(){
    int m,n;
    printf("Enter the number of elements of first array:");
    scanf("%d",&m);
    int a[m];
    printf("Enter elements of first array :\n");
    for(int i = 0;i < m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements of second array:");
    scanf("%d",&n);
    int b[n];
    printf("Enter elements of second array :\n");
    for(int i = 0;i < n;i++){
        scanf("%d",&b[i]);
    }
    printf("\nThe union of the array is:");
    unionarr(a,m,b,n);
    printf("\nThe intersection of the array is:");
    intersectionarr(a,m,b,n);
    return 0;
}
int unionarr(int a[],int m,int b[],int n){
    int c[m+n];
    int d[m+n];
    int i,j;
    int p = 0,q,count,k = 0;
    for(i = 0;i < m;i++){
        c[p] = a[i];
        p++;
    }
    for(i = 0;i < n;i++){
        c[p] = b[i];
        p++;
    }
    printf("\n");
    for( i = 0;i < p;i++){
        count = 0;
        for( j = i;j < p;j++){
            if(c[i] == c[j]){
                count++;
            }
        }
        if(count == 1){
            d[k] = c[i];
            k++;
        }
    }
    for(i = 0;i < k;i++){
        printf("%d ",d[i]);
    }
    return 0;
}
int intersectionarr(int a[],int m,int b[],int n){
    int c[m+n];
    int d[m+n];
    int i,j;
    int p = 0,q,count,k = 0;
    for( i = 0;i < m;i++){
        c[p] = a[i];
        p++;
    }
    for( i = 0;i < n;i++){
        c[p] = b[i];
        p++;
    }
    printf("\n");
    for( i = 0;i < p;i++){
        count = 0;
        for( j = i;j < p;j++){
            if(c[i] == c[j]){
                count++;
            }
        }
        if(count > 1){
            d[k] = c[i];
            k++;
        }
    }
    for(i = 0;i < k;i++){
        printf("%d ",d[i]);
    }
    printf("\n");
    return 0;
    }