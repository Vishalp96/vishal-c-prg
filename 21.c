#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("kum.txt","a+");
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a!=b&&b!=c&&a!=c)
    {
        fprintf(fp,"sum is:%d",a+b+c);
    }

    else if(a==b&&a==c)
    {
        fprintf(fp,"0");
    }
    else
    {
        if(a==b)
        {
            fprintf(fp,"the sum is:%d",c);
        }
        else if(a==c)
        {
            fprintf(fp,"the sum is:%d",b);
        }
        else
        {
            fprintf(fp,"%d",a);
        }
    }
    fclose(fp);
}
