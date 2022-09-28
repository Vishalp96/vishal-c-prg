#include<stdio.h>
int main()
{
    int i,sum=0,a;
    printf("enter the number:");
   for(i=0;i<5;i++)
    {
    scanf("%d",&a);
        sum=sum+a;
    }
    printf("sum is:%d",sum);
}
