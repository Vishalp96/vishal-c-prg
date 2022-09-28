#include<stdio.h>
int main()
{
    int b=1,p=2;
    printf("%d",flip(b,p));
}
flip(int b, int p)
{
    int martks=1+b;
    return ((1 + ~b) | ( b + p));
}
