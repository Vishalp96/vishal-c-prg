#include<stdio.h>
int avg(int [],int);
int main()
{
    int a=5;
    float k;
    int marks[5]={20,10,18,3,42};
    k=avg(marks,a);
    printf("avg is:%0.2f",k);
}
int avg(int marks[],int a)
{
    int i,m;
    float sum=0;
    for(i=0;i<a;i++)
    {
        sum=sum+marks[i];
    }
    m=sum/a;
    return m;
}
