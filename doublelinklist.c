#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
int main()
{
    struct node* head=NULL;
    struct node *ptr,*c1, *c2, *p ;

    head=(struct node *)malloc(sizeof(struct node));
    c1=(struct node *)malloc(sizeof(struct node));
    c2=(struct node *)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=10;
    head->next=c1;

    c1->prev=head;
    c1->data=20;
    c1->next=c2;

    c2->prev=c2;
    c2->data=30;
    c2->next=NULL;

    struct node* curr;
    curr=(struct node *)malloc(sizeof(struct node));
    curr->prev=NULL;
    curr->data=40;
    curr->next=NULL;

    //insert at middle
    ptr=head;
    while(ptr!='\0')
    {
        printf("%d ",ptr->data);

        if(ptr->data==20)
        {
            curr->prev=ptr;
            curr->next=ptr->next;
            ptr->next->prev=curr;
            ptr->next=curr;
        }

        ptr=ptr->next;
    }
    printf("\n");


}
