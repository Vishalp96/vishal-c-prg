#include<stdio.h>
int main()
{
    int n,s=0,p=1,d;
    printf("enter n integer:");
    scanf("%d",&n);
    while (n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;

    }
    if(s==p)
    {
        printf("number is  spy");
    }
    else

    {
        printf("number is not spy");
    }
}
