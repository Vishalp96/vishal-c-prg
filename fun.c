#include<stdio.h>
int fun(int ptr)
{
    printf("%d",ptr);
}
int main()
{
    int (*ptr)(int)=fun;
    (*ptr)(10);
}


