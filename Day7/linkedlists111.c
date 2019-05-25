#include <stdio.h> 
#include <stdlib.h> 

struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 
void insertAfter(struct Node* prev_node, int new_data) 
{ 
    if (prev_node == NULL) { 
      printf("the given previous node cannot be NULL"); 
      return; 
    } 
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = prev_node->next; 
    prev_node->next = new_node; 
} 
void append(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    struct Node *last = *head_ref; 
    new_node->data  = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 
    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node; 
    return; 
} 
void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 
void deleteNode(struct Node **head_ref, int key) 
{ 
    struct Node* temp = *head_ref, *prev; 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
    if (temp == NULL) return; 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 

void deleteList(struct Node** head_ref) 
{ 
 struct Node* current = *head_ref; 
   struct Node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
   *head_ref = NULL; 
} 
  
  
void deleteatpos(struct Node **head_ref, int position) 
{ int i;
   if (*head_ref == NULL) 
      return; 
   struct Node* temp = *head_ref; 
    if (position == 0) 
    { 
        *head_ref = temp->next;  
        free(temp);              
       return; 
    } 
    for ( i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
    if (temp == NULL || temp->next == NULL) 
         return; 
    struct Node *next = temp->next->next; 
  	free(temp->next); 
    temp->next = next; 
	} 

int getCount(struct Node* head) 
{ 
    int count = 0;   
    struct Node* current = head;   
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 
int search(struct Node* head, int x) 
{ 
    struct Node* current = head;   
    while (current != NULL) 
    { 
        if (current->data == x) 
            return 0; 
        current = current->next; 
    } 
    return 1; 
} 

int GetNth(struct Node* head,  
                  int index) 
{ 
	int count=0;
    struct Node* current = head; 
    while (current != NULL) 
    { 
        if (count == index) 
            return(current->data); 
        count++; 
        current = current->next; 
    } 
                  
} 
int main() 
{ int ch,n,m,v,b,x,s,c;
  struct Node* head = NULL;
  do
  {
  	printf("\n\t\tLinked List\t\t\n\tMenu\n1.Insert a node\n2.Insert after a node\n3.Insert a node at end\n4.Display\n5.Delete a node\n6.Delete at a position\n7.Delete a list\n8.Count of node\n9.Search a node\n10.Get Nth node\n11.Exit\n Enter a choice:");
  	scanf("%d",&ch);
  	switch (ch)
  	{
  		case 1:printf("Enter the element:");scanf("%d",&n);
  				push(&head,n);
  				printf("%d is  inserted.",n);
  				break;
  		case 2:printf("Enter the element:");scanf("%d",&m);
  				insertAfter(head->next, m);  
  				printf("%d is  inserted.",m);
				  break;
		case 3:printf("Enter the element:");scanf("%d",&v);
				append(&head, v);
				printf("%d is  inserted.",v);
				break;
		case 4: printList(head); 
				break;
		case 5:printf("Enter the element:");scanf("%d",&b);
				deleteNode(&head, b);
				printf("%d is  deleted.",b);
				break; 
		case 6:printf("Enter the position of the element to be delted:");scanf("%d",&x);
				deleteatpos(&head, x);
				break;
		case 7:printf("\n Deleting linked list"); 
               deleteList(&head);   
               printf("\n Linked list deleted");
			   break;
		case 8:	 printf("count of nodes is %d", getCount(head)); 
				break;
		case 9:printf("Enter the element:");scanf("%d",&c);
		search(head, c)? printf("Yes") : printf("No");
			 break;
		case 10:
		printf("enter the index:");scanf("%d",&s);printf("Element at index %d is %d",s,GetNth(head, s));
                     break;
		case 11:exit(0);
				break;
		default:printf("Invalid choice");
				break;	  
	  }
  	
   }while(ch!=8);  
    return 0; 
} 
