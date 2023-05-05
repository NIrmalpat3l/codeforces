// #include<stdio.h>
// #include<string.h>
// int main(){
//     // int c;
//     // c=getchar();
//     // printf("%d\n%c\n",c,c);
//     // putchar(c);
//     // return 0;
//     // char s[10]="ABC";
//     // int n = atoi(s);
//     // printf("%d",n);
//     // return 0;
//     // char s[]="ABC DEF GHI";
//     // char s1[5],s2[5],s3[5];
//     // sscanf(s,"%s %s %s",s1,s2,s3);
//     // puts(s1);
//     // puts(s2);
//     // puts(s3);
//     // return 0;
 // int n=0;
    // printf("Enter the number of students : ");
    // scanf("%d",&n);
    // struct hiramani h[n];
    // struct hiramani* ptr;
    // ptr = &h;
    // for(int i=0;i<n;i++)
    // {
    //     printf("Enter student name : ");
    //     scanf("%s",&(ptr+i)->name);
    //     printf("Enter Block : ");
    //     scanf(" %c",&(ptr+i)->block);
    //     printf("Enter Room no. : ");
    //     scanf("%d",&(ptr+i)->room);
    //     printf("Enter fee pay : ");
    //     scanf("%d",&(ptr+i)->fee);
    // }
    // printf("Name\t\t    Block\t\t    Room no.\t    Fess pay\n");
    // for(int i=0;i<n;i++)
    // {
    //     printf("%s\t\t\t%c\t\t\t%d\t\t\t%d\n",(ptr+i)->name,(ptr+i)->block,(ptr+i)->room,(ptr+i)->fee);
    // }
// #include<stdio.h>
// #include<stdlib.h>
// struct hiramani
// {
//     char name[100];
//     char block;
//     int room;
//     int fee;
// };
struct student
{
    int rollno;
    char name[20];
}s[2],*p;
void main(){
    p=s;
    s[0].rollno= 1;
    strcpy(p->name, "ABC");
    p++;
    s[1].rollno=2;
    strcpy(p->name,"XYZ" );
    p = s;
    printf("Roll no : %d",p->rollno);
    printf(" \nName : %s",p->name);
    
}
// }