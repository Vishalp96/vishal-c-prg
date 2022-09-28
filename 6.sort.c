#include<stdio.h>
int sort(int n,int *);
int main()
{
    int n,i;


    printf("Pointer sort an array using pointer\n");
    printf("____________________________________\n");
    printf("\n");
    printf("Input the number of minimum to store in the array:");
    scanf("%d",&n);
     printf("\nInput 5 members in th array:\n");

//         for(i=0;i<n;i++)
//    {
//        scanf("%d",a[i]);
//    }

     int a[]={25,45,89,15,82};

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
            if(*(a+i)>*(a+j))
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
