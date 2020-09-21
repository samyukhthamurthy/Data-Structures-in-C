#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head=NULL,*p;
void insertbeg(int x)
{
    struct node* newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=x;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void insertend(int x)
{
    struct node* newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=x;
    p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=newnode;
    newnode->next=NULL;
}
struct node* find(int s)
{
    p=head;
    while(p->next!=NULL && p->next->data!=s)
        p=p->next;
    return p;
};
void insertmiddle(int x)
{
    struct node* newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=x;
    int pos;
    printf("Enter position at which you want to insert the element:");
    scanf("%d",&pos);
    p=find(pos);
    newnode->next=p->next;
    p->next=newnode;
}
void display()
{
    p = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list: \n");
    while(p != NULL) {

        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void counting()
{
    int count=0;
    p = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list: \n");
    while(p != NULL) {

        count++;
        p = p->next;
    }
    printf("%d",count);
}
struct node* findprevious(int x)
{
    p=head;
    while(p->next!=NULL && p->next->data!=x)
        p=p->next;
    return p;
};
void deletion(int x)
{
    struct node* temp;
    p=head;
    if(p->data==x)
    {
        temp=p;
        head=temp->next;
        free(temp);
    }
    else
    {
        p=findprevious(x);
        if(p->next!=NULL)
        {
            temp=p->next;
            p->next=temp->next;
            printf("%d",temp->data);
            free(temp);
        }
        else
            printf("\nNot found!");
    }
}
int main()
{
    int choice,x;
    printf("\n1. Enter element at beginning.");
    printf("\n2. Enter element at middle.");
    printf("\n3. Enter element at end.");
    printf("\n4. Display Linked list.");
    printf("\n5. Delete elements from linked list.");
    printf("\n6. Count the number of elements in a linked list.");
    do
    {
    printf("\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\nEnter the element:");
                scanf("%d",&x);
                insertbeg(x);
                break;
        case 2: printf("\nEnter the element:");
                scanf("%d",&x);
                insertmiddle(x);
                break;
        case 3: printf("\nEnter the element:");
                scanf("%d",&x);
                insertend(x);
                break;
        case 4: display();
                break;
        case 5: printf("\nEnter the element:");
                scanf("%d",&x);
                deletion(x);
                break;
        case 6: counting();
                break;
        default:printf("\nPlease enter between 1-5 only.");
        break;
    }
    }while(choice<=6);
    return 0;
}
