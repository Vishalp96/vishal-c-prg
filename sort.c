#include<stdio.h>
int sort(int n,int *);
int main()
{
    int n=5,i;
    int a[5]={25,45,89,15,62};

    printf("Pointer sort an array using pointer\n");
    printf("____________________________________\n");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("element-%d : %d\n",i,a[i]);
    }
    printf("\n");
    sort(n,a);
}
int sort(int n,int *a)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(a+i)<*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
    printf("The elements in the array are sorted:\n");
    for(i=0;i<n;i++)
    {
        printf("element-%d : %d\n",i,*(a+i));
    }
}
