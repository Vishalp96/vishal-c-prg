#include<stdio.h>
char *k(char []);
int main()
{
    char a[10];
    gets(a);
    char *h;
    //h=k(a);
    printf("%s",k(a));
}
char *k(char r[])
{
    char*h=strrev(r);
    return h;
}


