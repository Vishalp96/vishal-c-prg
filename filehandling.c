#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("kiru.txt","r");
    char c1[10];
    if(fp=='\0')
    {
        printf("error");
    }
    while(!feof(fp))
    {
        fgets(c1,6,fp);
        printf("%s",c1);
    }

    fclose(fp);

}
