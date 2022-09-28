#include<stdio.h>
int main()
{

    int a[5];
    int *ptr[5];
    printf("enter the integers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        ptr[i]=&a[i];
        printf("%d",&ptr[i]);
    }


}
