#include<stdio.h>
int main()
{
     char *p;
     char a[100]="";
     int count=0,count1=0;
     printf("enter the string");
     scanf("%s",&a);
     p=&a;
     for(int i=0;a[i]!='\0';i++)
     {
         if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
         {
             count++;
         }
         else
         {
             count1++;
         }
         p++;

     }
     printf("vowels %d\n",count);
     printf("consonants %d\n",count1);
}
