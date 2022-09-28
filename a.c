#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d %d %d",&a,&b,&c);
if(a==b||a==c){
printf("the common element is a ");
}
 else if(b==a||b==c){
printf("the common element is b ");
 }
else if (c==a||c==b){
printf("the common element is c ");
}
else
{


printf("there is no common elements");

}
}
