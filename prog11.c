#include<stdio.h>
void main()
{
    int MRP;
    printf("ENTER THE AMOUNT YOU HAVE PURCHASED:");
    scanf("%d",&MRP);
    switch(MRP)
    {
    case <3500:
        printf("YOU HAVE PURCHGASED FOR %d \n YOU HAVE WON THE VOUCHER WORTH OF 500",MRP);
        break;
    case <5000:
        printf("YOU HAVE PURCHGASED FOR %d \n YOU HAVE WON THE VOUCHER WORTH OF 500",MRP");
        print("YOU CAN BUY A boAt air drops WORTH OF Rs.3000 for Rs.500");
        break;
    case <8000:
        printf("YOU HAVE PURCHGASED FOR %d \n YOU HAVE WON THE VOUCHER WORTH OF 500",MRP);
        printf("YOU CAN BUY A SMART WATCH WORTH OF Rs.3000 for JUST Rs.500");
        break;
    default:
        printf("thank you for purchasing");
    }
}
