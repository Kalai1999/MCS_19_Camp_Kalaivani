#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
void push(struct Node** head_ref, int new_data) 
{ 
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
int detectloop(struct Node* list) 
{ 
    struct Node *slow_p = list, *fast_p = list; 
  
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            printf("Found Loop"); 
            return 1; 
        } 
    } 
    return 0; 
} 
int main() 
{ int ch,n;
  struct Node* head = NULL;
  do
  {
printf("\n\t\tLinked List\t\t\n\tMenu\n1.Insert a node\n2.Detect loop\n3.Exit\n Enter a choice:");
  	scanf("%d",&ch);
  	switch (ch)
  	{
  		case 1:printf("Enter the element:");scanf("%d",&n);
  				push(&head,n);
  				printf("%d is  inserted.",n);
  				break;
  		case 2: head->next->next->next->next = head; detectloop(head); 
  				break;
  		case 3:exit(0);
  				break;
  		default:printf("Invalid choice");
				break;	  
  			}
  		}while(ch!=4);
  		return 0;
}
