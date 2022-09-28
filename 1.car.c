#include<stdio.h>
struct car
{
    char manufacture[2];
    char brand[2];
    int size;
    char type[1];
    char security[1];
    char model[1];
    char assembled[2];
    long int serial;
};
int main()
{
    struct car s;
    for(int i=0;i<20;i++)
    {
        scanf("\n%c ",s.manufacture);
        scanf("\n%c ",s.brand);
        scanf("\n%d ",&s.size);
        scanf("\n%c ",s.type);
        scanf("\n%c ",s.security);
        scanf("\n%c ",s.model);
        scanf("\n%c ",s.assembled);
        scanf("\n%d ",s.serial);
    }

    for(int i=0;i<20;i++)
    {
        printf("\nFor %d : %c",i,s.manufacture);
        printf("\nFor %d : %c ",i,s.brand);
        printf("\nFor %d : %d ",i,&s.size);
        printf("\nFor %d : %c ",i,s.type);
        printf("\nFor %d : %c ",i,s.security);
        printf("\nFor %d : %c ",i,s.model);
        printf("\nFor %d : %c ",i,s.assembled);
        printf("\nFor %d : %d ",i,s.serial);
    }
}
