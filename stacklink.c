#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node
{
	int data;
	struct node *next,*temp;
};
struct node *head;

void main()
{
int choice=0;
printf("\nSTACK OPERATIONS USING LINKED LIST\n");
printf("\n..................................\n");


do
{
printf("\n1.void push \n2.void pop \n3.Display\n4.Exit");
printf("\nENTER THE CHOICE: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
	push();
	break;
case 2:
	pop();
	break;
case 3:
	display();
	break;
case 4:
	printf("\n\t EXIT POINT");
	break;
default:
printf("\n\t PLEASE ENTER THE VALID CHOICE(1/2/3/4):");
}
}



while(choice!=4);
}
void push()
{
int data;
struct node*newnode,temp;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
printf("\n NO SPACE");
else
{
printf("\n ENTER THE ELEMENT TO BE PUSH:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
head=newnode;
else{
newnode->next=head;
head=newnode;
}
printf("\n%d INSERTED INTO THE LIST:",newnode->data);
}
}
void pop()
{
struct node *newnode=(struct node*)malloc(sizeof(struct node)),*temp;
temp=head;
newnode=temp->next;
head=temp->next;
free(temp);
}

void display()
{
struct node*newnode;
if(head==NULL)
printf("LIST IS EMPTY");
else
{
printf("\n ELEMENTS IN STACK ARE:");
newnode=head;
while(newnode!=NULL)
{
printf("\t%d",newnode->data);
newnode=newnode->next;
}
}
}






