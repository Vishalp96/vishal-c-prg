#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter values for a and b:");
    scanf("%d %d",&a,&b);
    swap(p1,p2);
    printf("swapped numbers are: %d %d",a,b);

}

int swap(int *a, int *b)
{
    int *temp;
    temp=&a;
    a=&b;
    b=&temp;

}
