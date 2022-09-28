#include<stdio.h>
int main()
{
    char *a[5]={"vishal","pawar","","brigosha","technology"};

    for(int i=0;i<50;i++)
    {
        if(a[i]=="")
        {
            a[i]="SKULAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
        }
    }
      for(int i=0;i<50;i++)
    {
        printf("%s\t ",a[i]);
    }
}
