#include<stdio.h>
//char mk(char *);
int main()
{
    int mk;
    char a[10];
    char(*p)(char[50])=mk;
    a[10]=(*p)("01321");
}
char mk(char *a)
{
    printf("%s",a);
}
