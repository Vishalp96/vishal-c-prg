#include<stdio.h>
int sort(int s,int *ptr)
{

   int i,j;
    printf("sorted array is");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(*(ptr+i)<*(ptr+j))
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }

    }
    for(int i=0;i<s;i++)
    {
        printf("%d",*(ptr+i));
    }

}
int main()
{
    int s,n[5];
    printf("Enter the size of array");
    scanf("%d",&s);
     printf("enter elements of array");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&n[i]);
    }
    sort(s,n);
}
