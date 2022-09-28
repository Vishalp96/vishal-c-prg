#include<stdio.h>
int main()
{
    int a=0xF3;
    int pos3,pos7,i,c;
    printf("enter the bit to set:");
    scanf("%d",&pos3);
    a=(1<<pos3)|a;
    printf("new value of a after set of pos3 of T0CON is:%d\n",a);
    printf("-------*******------\n");
    printf("enter the bit to set:");
    scanf("%d",&pos7);
    a=(1<<pos7)|a;
    printf("new value of a after set of pos7 of T0CON is:%d\n",a);
    printf("------******-------\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&c);

     int r=a&(1<<c);
     if(r==0)
     {
         printf("%d bit is clear of T0CON\n",i);
     }
     else
     {
         printf("%d bit is set of T0CON-\n",i);
    } }}
