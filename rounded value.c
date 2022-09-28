#include<stdio.h>
int z(int d);
int main()
{
    int a,b,c,d;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
     if(a==b&&b==c&&a==c)
{
        printf("0");
    }

    if(a!=b!=c)
    {
        printf("%d",a+b+c);
    }
    else if(a==b||b==c||c==a)
    {
        printf("%d",c,a,b);
    }
}
