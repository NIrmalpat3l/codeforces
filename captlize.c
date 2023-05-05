#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[1000],x;
    int l;
    scanf("%s",&s);
    s[0]=toupper(s[0]);
    printf("%s",s);
    return 0;
}