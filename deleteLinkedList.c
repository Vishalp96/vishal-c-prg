#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

int main()
{
    struct node* head=NULL;
    struct node *ptr,*ptr2,*c1, *c2,*c3;

    head=(struct node *)malloc(sizeof(struct node));
    c1=(struct node *)malloc(sizeof(struct node));
    c2=(struct node *)malloc(sizeof(struct node));
    c3=(struct node *)malloc(sizeof(struct node));
    struct node *curr;
    curr=(struct node *)malloc(sizeof(struct node));

    head->data=10;
    head->link=c1;

    c1->data=20;
    c1->link=c2;

    c2->data=30;
    c2->link=c3;

    c3->data=40;
    c3->link=curr;

    curr->data=60;
    curr->link=NULL;


    ptr=head;
    while(ptr!='\0')
    {
        printf("%d ",ptr->data);

        ptr=ptr->link;

    }
    printf("\n");

    //delete at beginning
//    ptr=head;
//    head=ptr->link;
//    free(ptr);
//
//    ptr=head;
//    while(ptr!='\0')
//    {
//
//        printf("%d ",ptr->data);
//        ptr=ptr->link;
//
//    }
    printf("\n");


    //delete at midd
       ptr=head;
    while(ptr!='\0')
    {
        printf("%d ",ptr->data);

        if(ptr->data==30)
        {
            ptr->link=ptr->link->link;

        }

       ptr=ptr->link;
    }
}


