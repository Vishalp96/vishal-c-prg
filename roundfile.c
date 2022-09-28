#include<stdio.h>
int round(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    sum=(sum/10)*10;


}
int main()
{
    int sum;
    sum=round(15,26,30);

    FILE *fp=NULL;
    fp=fopen("kiru.txt","w");
    if(fp=='\0')
    {
        printf("error");
    }
    fprintf(fp,"%d",sum);
    fclose(fp);

}
