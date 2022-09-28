#include<stdio.h>
int main()
{
    char x[20]="0b110101110";
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[0]=='0')
        {
            x[0]='1';
        }
    }
    printf("%s",x);
}
