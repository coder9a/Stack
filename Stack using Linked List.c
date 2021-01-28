#include<stdio.h>
#include<stdlib.h>
int n;
struct node
{
	int data;
	struct node* next;
};
struct node * top;
int PUSH()
{
	int val;
	struct node * ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("Unable to create Node");
		return 0;
	}
	else
	{
		printf("Enter the value\t");
		scanf("%d",&val);
		if(ptr == NULL)
		{
			ptr->data = val;
			ptr->next = NULL;
			top = ptr;
		}
		else
		{
			ptr->data = val;
			ptr->next = top;
			top = ptr;
		}
	printf("Item Pushed\n");
	}	
}
int POP()
{
	int item;
	struct node *p;
	if(top == NULL)
	{
		printf("Stack Underflow, can't POP\n");
		return 0;
	}
	else
	{
		item = top->data;
		p = top;
		top = top->next;
		free(p);
		p = NULL;
		return item;
	}
}
int display()
{
	if(top == NULL)
	{
		printf("Stack is empty\n");
		return 0;
	}
	else
	{
		while(top != NULL)
		{
			printf("%d\t", top->data);
			top = top->next;
		}
		printf("\n");
	}
}
int main()
{
	int choice;
	char option='y';
    printf("Create Stack Using Linked List\n");
	printf("How many elements in Stack\t");
	scanf("%d",&n);
	while(option=='y' || option == 'Y')
    {
    printf("1. PUSH\n2. POP\n3. Display\n4. Exit\n");
    printf("Enter Choice\t");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: PUSH();
        break;
    case 2: POP();
        break;
    case 3: display();
        break;
    case 4: 
        return 0;
    default: printf("Wrong Choice\n");
        break;
    }
    fflush(stdin);
    printf("Do you want to continue (Type y or n)? \t");
    scanf("%c",&option);
    }
}
