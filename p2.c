#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("the sum of numbers is:%d\n",sum(a,b));
    printf("the diff of numbers is:%d\n",diff(&a,&b));
    printf("the multi of the numbers is:%d\n",multi(a,b));
    printf("the mod of the numbers is:%d\n",mod(&a,&b));
    printf("the avg of the number is:%d\n",avg(a,b));
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int diff(int *a,int *b)
{
    int *d;
    d=*a-*b;
    return d;
}
int multi(int a,int b)
{
    int m;
    m=a*b;
    return m;
}
int mod(int *a,int *b)
{
    int s;
    s=*a%*b;
    return s;
}
int avg(int a,int b)
{
    int k;
    k=(a+b)/2;
        return k;

}
