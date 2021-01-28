#include<stdio.h>
#define SIZE 5
int isEmpty();
int isFull();
struct stack
{
	int top;
    int arr[SIZE];
};
struct stack s;
void push()
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
        s.top++;
        s.arr[s.top] = ele;
    }
    return;
}
int pop()
{
	int val;
    if(isEmpty())
    {
        printf("Stack underflow, cannot POP");
        return (s.top);
    }
    else
    {
        val = s.arr[s.top];
        s.top--;
        printf("Popped element is : ",val);
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
	int choice,option=1;
    s.top = -1;
	printf("Stack has been created successfully\n");
    while(option)
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
    printf("Do you want to continue (Type 0 or 1)? \t");
    scanf("%d",&option);
    }
}
