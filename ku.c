#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("kummi.txt","w");
    char ch[100]="brigosha";
    fputs(ch,fp);
    fclose(fp);
    fopen;
    fclose;
}
