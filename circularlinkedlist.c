#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL,*rear=NULL,*temp;
void create()
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	printf("\nEnter the node value : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(rear==NULL)
	head=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}

	rear->next=head;/*to link first and last node together for circular linked list. */
}

void del()
{
	temp=head;
	if(head==NULL)
		printf("\nUnderflow!");
	else
	{
		if(head==rear)
		{
			printf("\n%d",head->data);
			head=rear=NULL;
		}
		else
		{
			printf("\n%d",head->data);
			head=head->next;
			rear->next=head;
		}

	temp->next=NULL;
	free(temp);
	}
}

void display()
{
	temp=head;
	if(head==NULL)
		printf("\nEmpty");
	else
	{
		printf("\n");
		for(;temp!=rear;temp=temp->next)
			printf("\n%d address=%u next=%u\t",temp->data,temp,temp->next);
			printf("\n%d address=%u next=%u\t",temp->data,temp,temp->next);
	}
}
void insertbeginning()
{
    struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("\nEnter the node value : ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->next=rear->next;
	rear->next=temp;
}
int main()
{
    int chc;

 	printf("\nMenu\n\t 1. To create the element.");
	printf("\n\t 2. To delete the element.");
	printf("\n\t 3. To display the linked list.");
	printf("\n\t 4. Insert at beginning.");
	printf("\n\t 5. To exit from main.");
	do
	{printf("\nEnter your choice:");
	scanf("%d",&chc);

		switch(chc)
		{
			case 1:
	 		create();
			break;

		 	case 2:
	 		del();
	 		break;

	 		case 3:
	 		display();
	 		break;

	 		case 4:
                insertbeginning();
                break;

	 		case 5:
	 		return 1;

			default:
	 			printf("\nInvalid choice :");
	 	}
	}while(1);
    return 0;
}
