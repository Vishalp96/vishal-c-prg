#include<stdio.h>
int main()
{
    int a,b;
    char x;
    printf("enter the value for a,b:");
    scanf("%d%d",&a,&b);
    printf("enter the op:");
    scanf("\n%c",&x);
    switch(x)
    {
        case '+':printf("add %d",a+b);
        break;
        case '-':printf("sub %d",a-b);
        break;
    }
}
