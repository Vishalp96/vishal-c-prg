#include<stdio.h>
int main()
{
    int n=0x07;
    n=n &(~(1 << 0));
    n=n &(~(1 << 1));
    n=n &(~(1 << 2));
    n=n &(~(1 << 3));
    printf("0x%x",n);
}

