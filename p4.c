#include<stdio.h>
int main()
{
 int a,b;
 printf("enter a,b:");
 scanf("%d %d",&a,&b);
//printf("new value of a b is:%d\n %d",a,b);
 swap(&a,&b);
}
int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
   printf("new value of a is:%d\n new value of b is:%d\n",*a,*b);

}
