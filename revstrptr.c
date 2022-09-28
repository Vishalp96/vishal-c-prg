#include<stdio.h>
char *str1(char s[])
{
    int *p=strrev(s);
    return p;
}
int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s",&str);
    char *p=str1(str);
    printf("%s",p);

}
