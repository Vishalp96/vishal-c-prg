#include<stdio.h>
int main()
{
    char *a[5]={"spoorti","getting_trained_at","","learing","center"};
    for(int i=0;i<50;i++)
    {
        if(a[i]=="")
        {
            a[i]="SKUL";
        }
    }
      for(int i=0;i<50;i++)
    {
        printf("%s\t ",a[i]);
    }
}
