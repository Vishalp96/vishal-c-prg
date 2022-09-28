#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    add(num);
}
int fact(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    return fact;
}

int add(int num)
{
    int sum=0,last,p=num;
    while(num!=0)
    {
        last=num%10;
        num=num/10;
        sum=sum+fact(last);
    }
    if(p==sum)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }
    return add;
}
