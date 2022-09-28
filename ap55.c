#include<stdio.h>

typedef struct student
    {
        int id;
        char name[10];

    }std1,std2, std3;

int main()
{
std1 s1={111,"akshata"};
printf("%d\n%s",s1.id,s1.name);
std2 s2={117,"kshata"};
printf("%d\n%s",s2.id,s2.name);
std3 s3={121,"ahata"};
printf("%d\n%s",s3.id,s3.name);
}
