#include<stdio.h>
void fc(int a1[],int a2[],int a3[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a1[i]==a2[j] && a2[j]==a3[k])
        {
            printf("%d ",a1[i]);
            i++;
            j++;
            k++;
        }
        else if(a1[i]<a2[j])
            i++;
        else if(a2[j]<a3[k])
            j++;
        else
            k++;
    }
}
int main()
{
    int a1[]={1,5,6};
    int a2[]={2,6,3};
    int a3[]={1,8,6};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    int n3=sizeof(a3)/sizeof(a3[0]);
    fc(a1,a2,a3,n1,n2,n3);
    return 0;
}
