#include<stdio.h>
int main()
{
    int n=0x06;
    n=n | (1 << 3);
    n=n | (1 << 7);
    n=n | (1 << 6);
    printf("0x%x",n);
}


