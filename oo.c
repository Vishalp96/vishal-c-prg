#include<stdio.h>
int z(int d);
int main()
{
    int a,b,c,d;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    z(d);
}
int z(int d)
{
    int m,a,b,c;
   if((m=d%10)>=5)
   {
        printf("%d",(d/10)*10+10);
   }
    else
    {
       printf("%d",(d/10)*10);
    }
}

