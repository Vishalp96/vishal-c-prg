#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter value for b:");
    scanf("%d",&b);
    for(i=1;i<=9;i++)
    {
         printf("enter value for a:");
        scanf("%d",&a);
        b=b+a;
    }
    printf("%d",b);
}
