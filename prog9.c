//MAX discount chart
#include<stdio.h>
void main()
{
    int amount;
    printf("how much you have purchased:");
    scanf("%d",& amount);
     printf("welcome to MAX\n");
    if(amount>=5000){
            printf("your purchased amount is %d \n you won the voucher worth of 500\n",amount);
        if(amount>=8000){
            printf("you can get smart watch for just Rs.500");
        }else{
            printf("you can get boAt air drops for just Rs.500");
        }
        }else{
    printf("your purchased amount is %d \n thank you for choosing MAX",amount);
    }
}
