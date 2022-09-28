#include<stdio.h>
int main()
{
    char ch;
    int i=50;
    FILE *fp;
    fp=fopen("vk.txt","r");
    char c[100];
    while(!feof(fp))
    {
        fgets(c,100,fp);
        printf("%s\n",c);
        i++;
    }
    fclose(fp);
}
