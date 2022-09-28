#include<stdio.h>
char *display();
void main()
{
    char *p;
    p=display();
    printf("%s\n",p);
    p[0]='f';
    printf("%s",p);
}

char *display()
{
    static char p[]="hello";
    return p;


}
