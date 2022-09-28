#include<stdio.h>
int main()
{
    char str[20]="hello";
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(str[i]<str[j])
            {
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }

    }
    printf("%s",str);

}
