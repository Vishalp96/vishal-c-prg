#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("enter b:");
    scanf("%f",&b);
    for(a=1;a<=10;a++)
    {
        printf("%.2f*%d=%.2f\n",b,a,a*b);
    }
}
