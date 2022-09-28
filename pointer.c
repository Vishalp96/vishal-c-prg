#include<stdio.h>
int main()
{
    int a;char b;float c;
    scanf("%d%c%f",&a,&b,&c);
    int *ptr;
    char *pt;
    float *p;
    ptr=&a;
    pt=&b;
    p=&c;
    printf("%d\t%d\n",*ptr,ptr);
     printf("%c\t%d\n",*pt,pt);
     printf("%.2f\t%d\n",*p,p);
}
for(){
    for()
}
