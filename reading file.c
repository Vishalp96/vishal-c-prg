#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("hello.txt","w");
    int i=10;
    char ch='s';
    float a=2.52;
    fprintf(fp,"%d\n%c\n %.2f",i,ch,a);
    fclose(fp);

}
