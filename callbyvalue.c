#include<stdio.h>
int fun(int);
int num, a,sum=0,pro=1;
int main()
{
    //int num,sum,pro;
    scanf("%d",&num);
    fun(num);
    if(sum==pro){
        printf("it is spy");
    }else{
        printf("not spy");
        }

}
fun(int num)
{

        while(num>0){
        a=num%10;
        sum=sum+a;
        pro=pro*a;
        num=num/10;
        }
}
