#include<stdio.h>
int s(int,int);
int d(int,int);
int *a;
int *b;
int main()
{
    int a,b;
    int sum,diff;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    s(&a,&b);
    d(a,b);
    printf("%d%d",sum,diff);
}
int s(int *a,int *b){
                int sum;
                sum=*a+*b;
}
int d(int a,int b){
                int diff;
                diff=a-b;
}
