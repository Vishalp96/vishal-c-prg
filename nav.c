#include<stdio.h>
int main()
{
    int days,months, age, d,m,y,cd,cm,cy;
    printf("Enter your Birth day DOB:\n");
    scanf("%d%d%d",&d,&m,&y);
    printf("Enter the current date:\n");
    scanf("%d%d%d",&cd,&cm,&cy);
    if(m<cm){
    age=cy-y;
    }
    printf("Your present age is:%d",age);

}
