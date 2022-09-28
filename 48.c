/*#include<stdio.h>
int main()
{
    int a,count,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {   int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count=count+1;

        }

    if(count==2)

        printf("%d\t",i);
    }}*/
    #include<stdio.h>
    int main()
    {
        int a;
        scanf("%d",&a);
       prime(a);
    }
    int prime(int a)
    {   int i,j,c;
        for(i=1;i<=a;i++)
        {
            int c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)

                    c ++;
            }
            if(c==2)
            {
                printf("%d\n",i);
            }

        }
    }

