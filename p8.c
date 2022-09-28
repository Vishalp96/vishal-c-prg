#include<stdio.h>
int sum(int);
int fact(int);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is :%d\n",sum(n));
    if(n==sum(n))
    {
        printf("it is a strong number");
    }
    else
    {
        printf("not strong");
    }
}
int sum(int n)
{
    int last,sum=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum+fact(last);
    }
    return sum;
}
int fact(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
        return fact;
}
