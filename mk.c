#include<stdio.h>
int main()

{
    int    a[3],i;
    for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    }
    int   b[3];
    for(int j=0;j<3;j++)
    {
    scanf("%d",&b[i]);
    }
    int  c[3];
    for(int k=0;k<3;k++)
    {
    scanf("%d",&c[i]);
    }

    if((a[i]==b[j]||a[i+1]||b[j+2]) && (a[i]==c[k]||b[j+1]||c[k+2]) )
        {
            printf("%d ",a[i],b[j],c[k]);
        }
    }



