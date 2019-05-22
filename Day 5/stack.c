#include<stdio.h>
#include<process.h>
#include<stdlib.h>
 
#define MAX 5	//Maximum number of elements that can be stored
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
 
void main()
{
	int ch;
	printf("\t\t\t\t Stack Operations\t\t\n");
	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n\t\tMenu \t\t");
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
	 
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid Choice!!");
		}
	}
	
}
 
void push()  //function to push an element into a stack.
{
	int val;
	
	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
 
void pop()   //Function to delete an element from a stack. 
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\n%d is deleted.",stack[top]);
		top=top-1;
	}
}
 
void display()  //Function to display the contents of stack.
{
	int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nElements in the Stack is ::\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}

