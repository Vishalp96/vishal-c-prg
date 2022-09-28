#include<stdio.h>
//int main()

union vish

{
    int age;
    char name;

};
  struct aksh
  {

    int ag;
    char na;
  };
void main()
{
    union vish f;
    f.age=24;
    printf("\n%d",f.age);
    f.name='a';
    printf("\n%c",f.name);


    struct aksh g={10,'f'};
    printf("\n%d\n%c",g.ag,g.na);
}
