#include<stdio.h>
int main()
{
    int i=0;
    FILE *fp;
    fp=fopen("kum.txt","r");
    char c[50];
    while(!feof(fp))
    {
        fgets(c,50,fp);
        i++;
}
        printf("%d\t",h);
    fclose(fp);
}
