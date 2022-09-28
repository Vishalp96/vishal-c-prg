#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    switch(marks)
    {
    case 50 ... 65:
        printf("B grade");
        break;
    case 66 ... 75:
        printf("B+ grade");
        break;
    case 76 ... 85:
        printf("A grade");
        break;
    case 86 ... 90:
        printf("A+ grade");
        break;
    case 91 ... 100:
        printf("O grade");
        break;
    default:
        printf("fail");
    }
}
