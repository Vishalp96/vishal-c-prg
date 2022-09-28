#include<stdio.h>
int display()
{
    extern int x;
    x++;
    return x;
}
