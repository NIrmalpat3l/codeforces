#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    scanf("%d %d\n",&n,&k);
    char str[n];
    scanf("%s",&str);
    if(n==1)
    {
        str[0]='0';
    }else if(str[0]!='1')
    {
        str[0]='1';
        for(int i=1;i<=k-1;i++)
        {
            str[i]='0';
        }
    }else if(str[0]=='1')
    {
        for(int i=1;i<=k;i++)
        {
            str[i]='0';
        }
    }
    printf("%s",str);
    return 0;
}