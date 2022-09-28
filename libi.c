#include<stdio.h>
int kira(char *start,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%x",start[i]);

}
int main()
{
    int  i=0x0b110101110;
    kira((char *)&i,sizeof(i));
    return 0;
}
