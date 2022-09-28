#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void func(int, struct node*);
int main()
{
    struct node* head=NULL;
    struct node *ptr,*c1, *c2,*c3;

    head=(struct node *)malloc(sizeof(struct node));
    c1=(struct node *)malloc(sizeof(struct node));
    c2=(struct node *)malloc(sizeof(struct node));
    c3=(struct node *)malloc(sizeof(struct node));

    head->data=10;
    head->link=c1;

    c1->data=20;
    c1->link=c2;

    c2->data=30;
    c2->link=c3;

    c3->data=40;
    c3->link=NULL;

    func(30,head);

}

void func(int dat, struct node* link)
{

    struct node *curr;
    struct node *ptr;
    curr=(struct node *)malloc(sizeof(struct node));
    curr->data=60;
    curr->link=NULL;

    ptr=link;
    while(ptr!='\0')
    {
        printf("%d %d\n",ptr->data,ptr->link);

        if(ptr->data==dat)
        {
            curr->link=ptr->link;
            ptr->link=curr;
        }

        ptr=ptr->link;
    }
    printf("\n");
    ptr=link;
    while(ptr!='\0')
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;

    }

}

