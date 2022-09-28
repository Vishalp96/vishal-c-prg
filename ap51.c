#include<stdio.h>
int main()
{
    int *p[5];
    int a=15, b=20, c=30;
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    printf("%d\n %d\n %d\n",*p[0],*p[1],*p[2]);
}
