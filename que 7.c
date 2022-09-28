#include<stdio.h>
int main()
{
    int a=0xF3;
    int pos3,pos7,i,c;
    printf("enter the bit to set:");
    scanf("%d",&pos3);
    a=(1<<pos3)|a;
    printf("\n value of a after set of pos3 of T0CON register is:%d\n",a);
    printf("------------------*************-------------\n");
    printf("enter the bit to set:");
    scanf("%d",&pos7);
    a=(1<<pos7)|a;
    printf("\n value of a after set of pos7 of T0CON register is:%d\n",a);
    printf("----------------**************----------------\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&c);

     int r=a&(1<<c);
     if(r==0)
     {
         printf("%d bit is clear of T0CON register\n",i);
         printf("\n\n---------------Thank You-----------------");

     }
     else
     {
         printf("%d bit is set of T0CON register\n",i);
          printf("------------------------------------");
    } }}
