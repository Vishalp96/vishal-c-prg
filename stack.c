#include<stdio.h>
int max=7;
int stack[7];
int top=-1;

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top==max)
        return 1;
    else
        return 0;
}

int peek()
{
    return stack[top];
}

int pop()
{
    int data;
    if(!isEmpty())
    {
        data=stack[top];
        top=top-1;
        return data;
    }
    else
        printf("Stack is empty\n");
}

int push(int data)
{
    if(!isFull())
    {
        top=top+1;
        stack[top]=data;

    }
    else
        printf("Stack is full\n");
}

int main()
{
    push(3);
    push(5);
    push(8);
    push(2);
    push(9);
    push(55);
    push(99);
    push(88);
    push(77);

    printf("top = %d\n",peek());

    while(!isEmpty())
    {
        int data=pop();
        printf("%d\n",data);
    }

    printf("stack is empty : %s\n",isEmpty()?"true":"false");
    printf("stack is full : %s\n",isFull()?"true":"false");
}
