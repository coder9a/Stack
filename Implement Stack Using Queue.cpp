#include<stdio.h>
#define SIZE 5
int isEmpty();
int isFull();
int front = -1;
int rear = -1;
int size;
struct stack
{
	int top;
    int arr[SIZE];
};
struct stack s;
void push(int *Q)
{
    int ele;
    if(isFull())
    {
        printf("Stack overflow, cannot PUSH");
        return;
    }
    else
    {
    	printf("Enter Element\t");
        scanf("%d",&ele); 
        if(rear == -1)
        {
        	front = front+1;
        	rear = rear+1;
		}
		else
		{
			rear = rear+1;
		}
		Q[rear] = ele;
    }
    return;
}
int pop(int *Q)
{
	int y;
    if(isEmpty())
    {
        printf("Stack underflow, cannot POP");
        return (front);
    }
    else
    {
        y = Q[front];
        if(front == rear)
        {
        	front = -1;
        	rear = -1;
		}
		else
		{
			front = front+1;
		}
		return y;
    }
}
int isEmpty()
{
	if(s.top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull()
{
	if(s.top == SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display()
{
    int i;
    if(s.top == -1)
    {
        printf("Stack is empty\n");
        return ;
    }
    else
    {
        for(i=s.top; i>=0; i--)
        {
            printf("%d\t", s.arr[i]);
        }
    }
    printf("\n");
}
int main()
{
	int choice;
 	char option='y';
	printf("Stack has been created successfully\n");
    while(option=='y' || option=='Y')
    {
    printf("1. PUSH\n2. POP\n3. Display\n4. Exit\n");
    printf("Enter Choice\t");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: push();
        break;
    case 2: pop();
        break;
    case 3: display();
        break;
    case 4: 
        return 0;
    default: printf("Wrong Choice");
        break;
    }
    fflush(stdin);
    printf("Do you want to continue (Type y or n)? \t");
    scanf("%c",&option);
    }
}
