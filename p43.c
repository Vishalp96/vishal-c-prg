#include<stdio.h>

int main()
{
    int r;

    printf("enter radius:");
    scanf("%d",&r);
    printf("area of circle:%d\n",area1(r));
    printf("circumference of circle:%d",circum1(r));

}
int area1(int r)
{
    int area;
    area=3.14*r*r;
    return area;
}
int circum1(int r)
{
    int circum;
    circum=2*3.14*r;
    return circum;
}
