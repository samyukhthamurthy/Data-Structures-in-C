#include<stdio.h>
int queue[10],front,rear,n;
void enqueue()
{
    int x;
    if(rear==n)
        printf("Queue overflow!");
    else if(front==rear)
    {
        front=rear=0;
        printf("Enter the element of your choice:");
        scanf("%d",&x);
        queue[rear]=x;
        rear++;
    }
    else
    {
        printf("Enter the element of your choice:");
        scanf("%d",&x);
        queue[rear]=x;
        rear++;
    }
}
void dequeue()
{
    if(front==-1)
        printf("Queue underflow!");
    else if(front==rear)
    {
        printf("Deleted element:%d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Deleted element:%d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1)
        printf("Queue empty!");
    else
    {
        for(i=front;i<rear;++i)
        printf("%d\n",queue[i]);
    }
}
int main()
{
    int choice;
    printf("\n Enter the size of queue[MAX=10]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
do{
    printf("\n Enter the Choice:");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
                break;
            }

        }

}while(choice!=4);
    return 0;
}
