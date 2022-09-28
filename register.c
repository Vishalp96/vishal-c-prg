#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the bits to set:");
    scanf("%d",&b);
    a=(1<<b)|a;
    printf("result is:%d\n",a);
    printf("enter the number:");
    scanf("%d",&c);
    printf("enter the bits to set:");
    scanf("%d",&d);
    c=(1<<d)|c;
    printf("result is:%d\n",c);
    printf("result:%d",a+c);
}
