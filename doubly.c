#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *prev,*next;
};

struct node *head,*temp,*newnode;

void operations();
void insertAtFront();
void insertAtEnd();
void insertAfterPosition();
void display();
void deleteAtFront();
void deleteAtEnd();
void deleteAtPosition();
void search(int);

void main(){
operations();
}

void operations()
{
	int ch,key;
	printf("\n\n0.Exit \n1. Insert At front \n2. Insert at end \n3. Insert After position \n4.Delete At front \n5. Delete at end \n6.Delete at position \n7.Search \n8.Display \n");
	printf("Enter the choice(1/2/3/4/5/6/7/8): ");
	scanf("%d",&ch);
	printf("\nDOUBLY LINKEDLIST\n");
	printf("\n.................\n");
	switch(ch){
	case 1:
	insertAtFront();
	break;
	case 2:
	insertAtEnd();
	break;
	case 3:
	insertAfterPosition();
	break;
	case 4:
	deleteAtFront();
	break;
	case 5:
	deleteAtEnd();
	break;
	case 6:
	deleteAtPosition();
	break;
	case 7:
	printf("Enter the key to search for:");
	scanf("%d",&key);
	search(key);
	break;
	case 8:
	printf("display:");
	display();
	break;
	case 0:
	printf("Exiting the program");
	return;
	break;
	default:
	{
	printf("\n\nPlease enter a valid operation:");
	}
	}
	if(ch!=0){
	operations();	
	}
}
void insertAtFront(){
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter data for the new node: ");
	scanf("%d",&newnode->data);
	newnode->next = head;
	head = newnode;
	newnode->prev = NULL;
	display();
}
void insertAtEnd(){
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter data for the new node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp = head;
	while(temp->next!=NULL){
	temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	display();
}
void insertAfterPosition(){
	int pos,i=1;
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Which position do you want to enter?");
	scanf("%d",&pos);	
	printf("Enter data for the new node: ");
	scanf("%d",&newnode->data);
	temp = head;		
	while(i<pos){
	temp = temp->next;
	i++;
	}
	newnode->next = temp->next;
	newnode->prev = temp; 
	temp->next = newnode;
	display();
}
void deleteAtEnd(){
	temp=head;
	struct node *prev;
	while(temp->next!=NULL){
	prev = temp;	
	temp = temp->next;
	}
	prev->next=NULL;
	free(temp);	
	display();	
}
void deleteAtFront(){
	struct node *nextnode;	
	temp=head;
	nextnode= temp->next;
	nextnode->prev= NULL;
	head = temp->next;
	free(temp);
	display();
}
void deleteAtPosition(){
	int i=1,pos;
	struct node *ptr;
	printf("Which node do you want to delete? [Enter position]");
	scanf("%d",&pos);	
	temp=head;
	while(i<pos){
	ptr = temp;
	temp = temp->next;
	i++;
	}
	ptr->next = temp->next;
	if(ptr->next!=NULL)
	{
	ptr = ptr->next;
	ptr->prev = temp->prev;
	}	
	free(temp);
	display();
}
void search(int val)
{	
	int flag=0;
	temp = head;
	while(temp!=NULL){
		if(temp->data!=val){
		 temp=temp->next;	
		}
		else{
		 flag=1;
		 break;
		}
	}
	if(flag == 1){
	printf("Element found");		
	}
	else{
	printf("Element not found in list");
	}
}

void display()
{
	temp = head;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp = temp->next;
	}
}
