#include<stdio.h>
int main()
{
    int num;
    printf("enter the prime number:");
    scanf("%d",&num);
    printf("%d",prime(num));
}
int prime(int num)
{
    int i,temp=0;
    if(num==0||num==1)
    {
        temp=1;
    }
    for(i=2;i<=num/2;++i){
        if(num%i==0){
                temp=1;
                break;
            }
        if(temp==0){
            return 1;
        }
        else{

        return 0;
    }
    }
}
