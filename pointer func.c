#include<stdio.h>
int sum(int,int);
int main()
{
    int s;
    int (*ptr)(a,b)=&sum;
    s=(*ptr)(6,7);
    printf("%d",s);
}
int sum( a,b)
{
    return a*b;
}
