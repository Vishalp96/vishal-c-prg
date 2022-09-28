
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
    struct node *ptr,*c1, *c2 ;

    head=(struct node *)malloc(sizeof(struct node));
    c1=(struct node *)malloc(sizeof(struct node));
    c2=(struct node *)malloc(sizeof(struct node));
    struct node *curr;
   curr=(struct node *)malloc(sizeof(struct node));


    head->data=10;
    head->link=c1;

    c1->data=20;
    c1->link=c2;

    c2->data=30;
    c2->link=curr;

    curr->data=40;
    curr->link=head;


    printf("\n");
    ptr=head;
    while(ptr!='\0')
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;

    }

}
