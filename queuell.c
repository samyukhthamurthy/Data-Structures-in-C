#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int x)
{
    struct node* newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=x;
    if(rear=NULL)
    {
        front=rear=newnode;
        newnode->next=NULL;
    }
    else
    {rear->next=newnode;
    rear=newnode;}
}
void dequeue()
{
    struct node* temp;
    if(front==NULL)
        printf("\nQueue empty!");
    else
    {
        temp=front;
        if(front==rear)
        {
            front=rear=NULL;

        }
        else
        {
            front=front->next;

        }
        printf("Deleted element:%d",temp->data);
        free(temp);
    }
}
int main()
{
    enqueue(1);
    enqueue(3);
    dequeue();
    dequeue();
    return 0;
}
