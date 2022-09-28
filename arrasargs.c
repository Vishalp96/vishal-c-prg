#include<stdio.h>
int avg(int [],int);
int main()
{

    int average,size;
    int marks[5]={10,20,30,40,50};
    size=sizeof(marks)/sizeof(marks[0]);
    average=avg(marks,size);
    printf("%d",average);
}

int avg(int marks[],int a)
{
    int i,sum=0,avg1=0;
    for(i=0;i<a;i++)
    {
        sum=sum+marks[i];
    }
    avg1=sum/a;
    return avg1;
}
