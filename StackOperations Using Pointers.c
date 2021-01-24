#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int size;
int isEmpty(struct stack *ptr);
int isFull(struct stack *ptr);
struct stack
{
	int top;
	int arr[MAX];
};
void init_stack(struct stack *ptr) 
{
   ptr->top = -1;
}
void push(struct stack *ptr)
{
	int ele;
    if(isFull(ptr))
    {
        printf("Stack overflow, cannot PUSH");
        return;
    }
    else
    {
    	printf("Enter Element\t");
        scanf("%d",&ele);
        ptr->top++;
        ptr->arr[ptr->top] = ele;
    }
    return;
}
int pop(struct stack *ptr)
{
	int val;
    if(isEmpty(ptr))
    {
        printf("Stack underflow, cannot POP");
        return -1;
    }
    else
    {
        val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int isEmpty(struct stack *ptr)
{
	if(ptr->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct stack *ptr)
{
	if(ptr->top == size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int display(struct stack *ptr)
{
    int i;
    if(isEmpty(ptr))
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=ptr->top; i>=0; i--)
        {
            printf("%d  ", ptr->arr[i]);
        }
    }
    printf("\n");
}
int main()
{
	int choice,ele,pos;
	struct stack s;
	char option ='y';
	init_stack(&s);
	printf("Enter stack size\t");
	scanf("%d",&size);
	while(option=='y'||option=='Y')
	{
	printf("1. PUSH\n2. POP\n3. Display\n4. EXIT\n");
    printf("Enter Choice\t");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: push(&s);
        break;
    case 2: pop(&s);
        break;
    case 3: display(&s);
        break;
    case 4: exit(0);
        break;
    default: printf("Wrong Choice! Try Again");
        break;
    }
     fflush(stdin);
    printf("Do you want to continue (y or n)? \t");
    scanf("%c",&option);
   }
   return 0;
}
