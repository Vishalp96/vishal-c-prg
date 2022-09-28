#include<stdio.h>
int main()
{
    int a=1;
    char b[]="sk";
    char c[]="ta10p";
    char d='Z';
    char e='y';
    int g=10000;

    for(int i=g;i<10010;i++)
    {
        printf("%d%s%s%c%cE%d\n",a,b,c,d,e,i);
    }
    for(int i=10010;i<10015;i++)
    {
        printf("%d%s%s%c%cH%d\n",a,b,c,d,e,i);
    }
    for(int i=10015;i<10020;i++)
    {
        printf("%d%s%s%c%cP%d\n",a,b,c,d,e,i);
    }
}
