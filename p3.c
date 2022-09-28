#include<stdio.h>
int main()
{
    char a[10]="SUSHIL";
    printf("%s",mod(a));
   // len(a);
}
int mod(char a[])
{
    int i;
    for(i=0;i!='\0';i++)
{
    if(a[0]=='S')
    {
        printf("%c",'M');
    }
}
}
/*int len(int a)
{
    printf("length of string:%d",strlen(a));
}
}*/
