#include<stdio.h>
void main()
{
    int a=5,b=10;
    int * ptr=&a;
    printf("%d\n",ptr);
    ptr=ptr+2;
    printf("%d",ptr);

}
