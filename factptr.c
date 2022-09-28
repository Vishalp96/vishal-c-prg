#include<stdio.h>
int* fact1(int num)
{
    int i;
    int fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    return fact;
}
int main()
{

    int *ptr,num;
    printf("Enter a number:");
    scanf("%d",&num);
    ptr=fact1(num);
    printf("%d",ptr);
}

