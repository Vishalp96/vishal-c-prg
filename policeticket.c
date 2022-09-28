#include<stdio.h>
int main()
{
    int speed;
    char b;
     printf("is it your birthday? Y or N: ");
    scanf("%c",&b);
    printf("Enter the speed(kmph) : ");
    scanf("%d",&speed);

    printf(" 0 = No ticket\n 1 = small\n 2 = big\n\n");


    if(b=='N')
    {
        if(speed<=60)
            printf("0");
        else if(speed>=61&&speed<=80)
           printf("1");
        else
            printf("2");
    }
    else if(b=='Y')
    {
        if(speed<=65)
            printf("0");
        else if(speed>=66&&speed<=85)
           printf("1");
        else
            printf("2");
    }
}
