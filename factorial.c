#include<stdio.h>
int main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    printf("%d",fact(a));
}
int fact(int a)
{
    int b=1,i;
    for(i=1;i<=a;i++){
        b=b*i;
    }
    return b;
    }
