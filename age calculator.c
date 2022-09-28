//age calculator
#include<stdio.h>
void main()
{
    int dd,mm,yyyy,cd,cm,fy;         //initializing date , month and year in the integer
    float month,age;        //initializing age and month in float
    printf("enter your date of birth:\t");        //ask the user to enter DoB using string
    scanf("%d%d%d",&dd,&mm,&yyyy);                 //scanf used to get input from user
    printf("enter the current date,year and month:\t");        //ask the user to enter current date month and year
    scanf("%d%d%d",&cd,&cm,&cy);                        //scanf used to get input from user
    if(mm<=cm){
    age=cy-yyyy;
    month=mm/cm;
    age=age+month;
    printf("%.2f",age);
    }
    else if(9<mm||mm<=12)
        {
    age=2021-yyyy;
    month=mm/12.0;
    age=age+month;
    printf("%.2f",age);
    }
    else
    {
    printf("invalid month or year");
    }
}
