#include<stdio.h>
unsigned int swaping(unsigned int );

int main()
{
    unsigned int X=64;
    int m=swaping(X);
    printf("%d",m);
}
unsigned int swaping(unsigned int X)
{
    unsigned int even_sort= X & 0xAAAAAAAA;
    unsigned int odd_sort= X & 0x55555555;
    even_sort >>= 1;
    odd_sort <<= 1;
    return (even_sort | odd_sort);

}

