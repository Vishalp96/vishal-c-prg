#include<stdio.h>
int main()
{

int n,m,o,p,q,r;
printf("enter the number:");
scanf("%d",&n);
printf("enter the bit position to set:");
scanf("%d",&m);
n=(1<<m)|n;
printf("result is:%d\n",n);
printf("enter the number to clear:");
scanf("%d",&o);
printf("enter the bit position to clear:");
scanf("%d",&p);
o=o&~(1<<p);
printf("result is:%d\n",o);
printf("enter the number to toggel:");
scanf("%d",&q);
printf("enter the bit position to toggel:");
scanf("%d",&r);
q=q^(1<<r);
printf("result is:%d",q);
}
