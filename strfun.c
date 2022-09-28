#include<stdio.h>
int main()
{
    char str1[10]="Sampada";
    char str2[10]="sumant";
    printf("String 1 is: %s\n",str1);
    printf("String 2 is: %s\n",str2);
    length(str1);
    modify(str2);

}

int length(char str1[])
{
    printf("Length of the string is %d\n",strlen(str1));

}

int modify(char str2[])
{
    printf("Modified string is %s",strupr(str2));

}
