#include<stdio.h>
//typedef struct emp{
//        int empid;
//        float salary;
//        char name;
//    }em;
//    void main()
//    {
//        em s[3];
//        int i;
//        for(i=0;i<2;i++){
//            scanf("%d\n",&s[i].empid);
//            scanf("%f\n",&s[i].salary);
//            scanf("%c",&s[i].name);
//        }
//        for(i=0;i<2;i++){
//            printf("%d\t%.2f\t%c\n",s[i].empid,s[i].salary,s[i].name);
//        }
//    }

typedef struct plants{
    char name[10];
    float gravity;
    }solar;
    void main()
    {
        solar s[2];
        int i;
        for(i=0;i<2;i++){
            scanf("%s\n%f",&s[i].name,&s[i].gravity);
        }
        for(i=0;i<2;i++){
            printf("%s\t%.2f\n",s[i].name,s[i].gravity);
        }
    }
