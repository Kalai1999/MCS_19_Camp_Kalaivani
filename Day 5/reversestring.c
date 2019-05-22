#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <limits.h> 
  
// A structure to represent a stack 
struct Stack 
{ 
    int top; 
    unsigned capacity; 
    char* array; 
}; 
  
// function to create a stack of given  
 
struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (char*) malloc(stack->capacity * sizeof(char)); 
    return stack; 
} 
  
int isFull(struct Stack* stack) 
{ return stack->top == stack->capacity - 1; } 
  
 
int isEmpty(struct Stack* stack) 
{ return stack->top == -1; } 
  
// Function to add an item to stack.  
void push(struct Stack* stack, char item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
} 
  
// Function to remove an item from stack.  
// It decreases top by 1 
char pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 
  
// A stack based function to reverese a string 
void reverse(char str[]) 
{ 
  
    int n = strlen(str); 
    struct Stack* stack = createStack(n); 
  
    // Push all characters of string to stack 
    int i; 
    for (i = 0; i < n; i++) 
        push(stack, str[i]); 

    for (i = 0; i < n; i++) 
        str[i] = pop(stack); 
} 

int main() 
{ 
	char str[10];
   printf("Enter the  string :");
    scanf("%s",str);
  
    reverse(str); 
    printf("Reversed string is %s", str); 
  
    return 0; 
}
