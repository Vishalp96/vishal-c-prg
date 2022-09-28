//without argument with return
#include<stdio.h>

int add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("%d",sum);
    return sum;
}
int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    add(a,b);
}
