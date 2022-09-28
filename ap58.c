#include<stdio.h>
int main()
{
    int a[5],avg,i,sum=0,n;
    printf("Enter the numbers");
    scanf("%d",&n);
    printf("enter an array");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];

    }

    printf("%d\n",sum);
    avg=sum/n;
    printf("%d",avg);
}
