#include<stdio.h>
#include<string.h>
#include<ctype.h>
int stack[100]; int top=-1;
void push(int item)
{
    if(top==99)
        printf("\nStack overflow!");
    else
    {
        top++;
        stack[top]=item;
    }
}
int pop()
{
    int item;
    if(top==-1)
        printf("Stack underflow.");
    else
    {
        item=stack[top];
        top--;
        return(item);
    }
}
int is_operator(char symbol)
{
    if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
        return 1;
    else
        return 0;
}
void eval(char prefix[])
{
    int i,val,A,B;char ch;
    for(i=strlen(prefix)-1;i>=0;--i)
    {
        ch=prefix[i];
        if(isdigit(ch))
            push(ch-'0');
        else if(is_operator(ch)==1)
        {
            A=pop();
            B=pop();
            switch(ch)
            {
                case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }
            push(val);
        }
    }
     printf(" \n Result of expression evaluation : %d \n", pop());
}
int main()
{
    char prefix[100];
    printf("Prefix expression:\n");
    scanf("%s",prefix);
    eval(prefix);
    return 0;
}
