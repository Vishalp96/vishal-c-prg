#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
     scanf("%d",&age);
     if(age>=18){
            if(age>21){
        printf("eligible for marrage");
     }
     else {
        printf("eligible for voting");
     }
     }
     else
        printf("you are under 18 person");
}
