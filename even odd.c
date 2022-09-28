#include<stdio.h>;
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    even(a);
}
int even(int a)
{
    int b=1;
    if(a&b==0){
    printf("even");
    }else{
    printf("odd");
    }
}
