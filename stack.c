#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
 top=-1;
 printf("\n Enter the size of stack[MAX=100]:");
 scanf("%d",&n);
 printf("\n\t STACK OPERATIONS USING ARRAY:");
 printf("\n\t------------------------------");
 printf("\n\t1.push \n\t2.Pop \n\t3.Display\n\t4.Exit\n\t");
 do
 {
 printf("\n Enter the choice:");
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
 
 printf("\n\tEXIT POINT");
 break;
 default:
 {
 printf("\n\t please enter a valid choice(1/2/3/4)");
 }
 }
 }
 while(choice!=4);
 }
 
 
 void push()
 {
 if (top>=n-1)
 {
 printf("\n\tStack is overflow");
 }
 else
 {
 printf("enter a value to be pushed:");
 scanf("%d",&x);
 top++;
 stack[top]=x;
 }
 }
 void pop()
 {
 if(top<=-1)
 {
 printf("\n\t STACK is underflow");
 }
 else
 {
 printf("\n\t The popped elements is %d",stack[top]);
 top--;
 }
 }
 void display()
 {
 if(top>=0)
 {
 printf("\n the elements in STACK \n");
 for(i=top;i>=0;i--)
 printf("\n%d",stack[i]);
}
 else
 {
 printf("\n the stack is empty");
 }
 }
 
 
 
 
 
 
