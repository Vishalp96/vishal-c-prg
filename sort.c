#include<stdio.h>
int sort(int*,int );
int main()
{
int a[7]={5,6,3,2,7,1,0};
int n=7;
sort(a,n);

}


int sort(int *a,int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((*a+i)>*(a+j))
{
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;
}
}
}
for(i=0;i<n;i++)
{
 printf("%d",*(a+i));
}


}
