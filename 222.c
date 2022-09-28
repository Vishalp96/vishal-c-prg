+#include<stdio.h>
int main()
{
    int i=0;
    FILE *fp=NULL;
    FILE *p;
    fp=fopen("kum.txt","r");
    p=fopen("vk.txt","w");
{

    char c[50];
    while(!feof(fp))
    {
        fgets(c,50,fp);
        fputs(c,p);

    }
        fclose(fp);
        fclose(p);
    p=fopen("vk.txt","w");
    fclose(p);
}
}

