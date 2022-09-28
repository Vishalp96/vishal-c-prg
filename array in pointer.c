#include<stdio.h>
int main()
{
    int ar1[5];
    int* ptr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&ar1[i]);
    }
    for(int i=0;i<5;i++){
    ptr[i]=&ar1[i];
    printf("%d\n",ptr[i]);
    }
}
