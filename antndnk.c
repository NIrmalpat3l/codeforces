#include<stdio.h>
#include<string.h>
int main()
{
    int n,a=0,d=0;
    scanf("%d",&n);
    char str[100000];
    scanf("%s",&str);
    for(int i=0;i<n;i++){
        if (str[i] =='A')
        {
            a++;
        }else{
            d++;
        }
    }
    if (a>d)
    {
        printf("Anton");
    }else if (d>a){
        printf("Danik");
    }else if (d==a){
        printf("Friendship");
    }
    return 0;
}