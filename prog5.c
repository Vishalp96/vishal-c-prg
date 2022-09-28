#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a==b&&b==c&&a==c){
        printf("20");
    }
    else if((a!=b&&b==c)||(a==b&&a!=c)||(a==c&&b!=c))
    {
    printf("10");
    }
    else if(a!=b&&b!=c&&a!=c)
    {
    printf("0");
    }

}

/*#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a==b||b==c||c==a)
    {
        printf("20");
    }
else if(a!=b&&b!=c||c!=a)
{
    printf("0");
    }
    else
printf("10");
}*/
