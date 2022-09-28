#include<stdio.h>

struct abc
{
    int a;
    char b;
};

int fun(struct abc *v)
{
    printf("%d %c",v->a,v->b);
}

int main()
{
   struct abc v={10,'a'};
    fun(&v);

}
