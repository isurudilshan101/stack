#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5
int stack[CAPACITY], top=-1;
void push(int);
int pop(void);
int isFul(void);
int isEmpty(void);
void travers(void);
void peek(void);




void main(void)
{
    int ch,item;
    while(1)
     {
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Peek \n");
        printf("4.Travers \n");
        printf("5.Quite \n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1 :printf("Enter element : ");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2 : item=pop();
            if(item==0)
            {
                printf("stack is underflow \n");

            }
            else
            {
                printf("popped item is: %d\n", item);
            }
            break;

            case 3 : peek();

            break;

            case 4 : travers();
            break;

            case 5 : exit(0);
            default : printf("Invalid input");

        }

     }
}

void push(int ele)
{
    if (isFul())
    {
        printf("stack is overflow \n");
    }
    else
    {
        top ++;
        stack[top]=ele;
        printf("%d pushed\n",ele);
    }
}

int isFul()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    if(isEmpty())
    {
       // printf("stack is underflow \n");
       return 0;
    }
    else
    {
        return stack[top--];
    }
}

int isEmpty()
    {


        if(top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }

void peek()
{

    if(isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("peek element : %d \n",stack[top]);
    }
}
void travers()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        int i;
        printf("stack elements : \n");
        for(i=0; i<=top; i++)
        {
            printf("%d\n",stack[i]);
        }
    }

}
