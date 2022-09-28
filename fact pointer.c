#include<stdio.h>
int fact(int );
int main()
{
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  printf("%d",fact(a));
}
int fact(int a)
{
  //  int a;
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }

    return fact;
}
