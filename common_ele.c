#include<stdio.h>
int main()
{
 int    a[3]={3,4,6},i;
  int   b[3]={2,4,5};
  int  c[3]={4,3,2};
    for(i=0;i<3;i++)
    {
        if( (a[i]==b[i]||b[i+1]||b[i+2]) && (a[i]==c[i]||c[i+1]||c[i+2]) )
        {
            printf("%d",a[i]);
        }
    }
}
