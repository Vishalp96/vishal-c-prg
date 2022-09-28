#include<stdio.h>
int main()
{
    int i,a1[5],a2[5];
    for(i=0;i<5;i++)
        scanf("%d",&a1[i]);
   /* for(i=0;i<5;i++)
        printf("%d",a1[i]);*/
    for(i=4;i>=0;i--)
        printf("%d",a1[i]);

   for(i=0;i<5;i++)
        if(a1[i]==a2[i])
        {
            printf("true");
        }
    else
    {

        printf("not");
    }
}
