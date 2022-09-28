#include<stdio.h>
int fun1(int,int);
int fun2(int*,int*);
int main()
{

    int a, b, sum;
    printf("enter two variables: ");
    scanf("%d\t%d",&a,&b);
    fun1(a,b);
    fun2(&a,&b);
}
int fun1(int a, int b)
{
    int sum;
    sum=a+b;
    printf("sum is =(%d)\n",sum);
}
int fun2(int *a,int *b)
{
    int sum;
    sum=(*a)*(*b);
    printf("multiplication is= (%d)",sum);

}
