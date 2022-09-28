#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the values ;");
    scanf("%d %d",&x,&y);
    printf("the sum is:%d\n",sum(x,y));
    printf("the sub is:%d",sub(&x,&y));
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int sub(int *x,int *y)
{
    int *a;
    a=*x-*y;
    return a;
}
