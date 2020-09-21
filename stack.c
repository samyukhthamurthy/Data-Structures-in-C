#include <stdio.h>
#include<stdlib.h>
int arr[10],y,top,n,choice,k;
void push()
{
    if(top==n-1)
    printf("Stack overflow!");
    else
    {  printf("Enter value to be pushed:");
       scanf("%d",&y);
        top++;
        arr[top]=y;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack underflow!");
    else
    {
        printf("Element deleted:%d",arr[top]);
        top--;
    }
}
void display()
{
    if(top<0)
        printf("\nStack empty!");
    else
    {
        for(k=top;k>0;k--)
        printf("%d\n",arr[k]);
    }
}
int main()
{   top=-1;
    printf("\n Enter the size of STACK[MAX=10]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
do{
    printf("\n Enter the Choice:");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
