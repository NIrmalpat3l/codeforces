#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int c=1;
    int l=strlen(s1);
    for(int i=0;i<l;i++){
        s3[i]=s1[l-i-1];
        if(s3[i]==s2[i]){
            c++;
        }
    }
    printf("%s",s3);
    if(c!=l){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}