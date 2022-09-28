#include<stdio.h>

int str(char c[])
{
    if(c[0]=='x'||c[0]=='X')
    {
        /*for(int i=1;i<5;i++)
        {
            printf("%c",c[i]);
        }*/
        printf("%s",c+1);
    }
    else
    {
        /*for(int i=0;i<5;i++)
        {
            printf("%c",c[i]);
        }*/
        printf("%s",c);
    }
}
void main()
{
    char c[20];
    printf("Enter a string:");
    scanf("%s",&c);
    str(c);


}

