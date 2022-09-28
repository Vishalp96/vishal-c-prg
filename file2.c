#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("umaa.txt","w");
    /*char ch='m';
    int i=18;
    char a[100]="abcdfe";
    fprintf(fp,"%d\n%c\n%s",i,ch,a);*/

    if(fp==NULL)
    {
        printf("error");
    }
    else
    {
        char ch='m';
    int i=18;
    char a[100]="abcdfe";
    fprintf(fp,"%d\n%c\n%s",i,ch,a);

    fclose(fp);
    }
}
