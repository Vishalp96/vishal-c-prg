#include<stdio.h>
unsigned  int swapbit(unsigned int);
int main()
{
    unsigned  int x=43;
    printf("%d",swapbit(x));
}
unsigned int swapbit(unsigned int x)
{

    unsigned int even_bits=x & 0xAAAAAAAA;
    printf("%d\n",even_bits);
    unsigned int odd_bits=x & 0x55555555;
    even_bits>>=1;
    odd_bits<<=1;
    return (even_bits|odd_bits);
}
