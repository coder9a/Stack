#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	int *arr;
};

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
	if(ptr->top == ptr->size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	struct stack *s;
	printf("Enter size of stack :\t");
	scanf("%d",&n);
	s->size = n;
	s->top = -1;
	s->arr = (int *)malloc(n*sizeof(int));
	// Check if stack is Empty
	if(isEmpty(s))
	{
		printf("The stack is empty\n");
	}
	else
	{
		printf("The stack is not empty\n");
	}
	// Check if stack is Full
	/*
	if(isFull(s))
	{
		printf("Stack is Full\n");	
	}
	else
	{
		printf("Stack is not full\n");
	}
	*/
	return 0;
}