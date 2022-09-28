#include<stdio.h>

int str(char c[],int i)
{
    return c+i;
}
void main()
{
    char c[20];
    int i;
    printf("Enter a string:");
    scanf("%s",&c);
    printf("Enter index:");
    scanf("%d",&i);
    printf("%s",str(c,i));


}

