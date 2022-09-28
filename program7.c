#include<stdio.h>
int main()
{
    int n=0xF3,k=8;
    n=n | (1 << k-5);
    n=n | (1 << k-1);
    printf("0x%x\n",n);

}


