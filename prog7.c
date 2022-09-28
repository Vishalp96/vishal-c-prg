#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>=b){
            printf("hello");
            if(a>c){
                    printf("%d is larger",a);
            }else{
                printf("%d is not largest",a);
            }
    }
    else
    {
    printf("%d is smallest number",a);
    }

}
