#include<stdio.h>
int main()
{
 int    a[3]={3,4,6},i;
  int   b[3]={8,4,5};
  int  c[3]={4,1,20};
    for(i=0;i<3;i++)
    {
        if( (a[i]==b[i]||a[i+1]||b[i+2]) && (a[i]==c[i]||b[i+1]||c[i+2]) )
        {
            printf("%d ",a);
        }
    }
}
