include<stdio.h>
int * z(int []);
int main()
{
    int *p;
    int a[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    //p=display(a);
    printf("%d\n",*z(a));
}
int* z(int a[])
{
    a=a+2;
    return a;
}
