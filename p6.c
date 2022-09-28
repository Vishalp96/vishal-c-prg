#include<stdio.h>
struct abc //structure
{
    int a;
    float b;
    char c;
};
int sture(int a,float b,char c)//function
{

        printf("%d\n %0.2f\n %c",a,b,c);

}
int main()//main function
{
    struct abc m={10,2.354,'k'};//initializing struct variable

    sture(m.a,m.b,m.c);//passing structure variable
}

