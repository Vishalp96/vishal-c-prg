#include<stdio.h>
void main()
{
    int* p[5];
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    p[3]=&d;
    p[4]=&e;

    for(int i=0;i<=4;i++){
    printf("%d\n",*p[i]);
        }
}
