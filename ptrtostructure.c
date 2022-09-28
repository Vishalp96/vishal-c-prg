#include<stdio.h>
struct abc
{
    int a;
    char b[10];
};
int main()
{

    struct abc v;
    struct abc *ptr=&v;
    scanf("%d %s",&ptr->a,&ptr->b);
    printf("%d %s",ptr->a,ptr->b);

}
