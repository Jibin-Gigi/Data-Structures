#include<stdio.h>
int a[50],front=0,rear=-1,max;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
int choice;
printf("Enter the max. of queue\n");
scanf("%d",&max);
do
{
printf("Enter the choice\n1)Enqueue\n2)Dequeue\n3)Peek\n4)Display \n5)Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
case 5:
{
break;
}
default :
{
printf("Invalid choice\n");
}
}
}
while(choice!=5);
}
void enqueue()
{
int val;
if(rear>=max-1)
printf("Overflow\n");
else
{
rear++;
printf("Enter the value to be added\n");
scanf("%d",&val);
a[rear]=val;
}
}
void dequeue()
{
int item;
if(front==rear){
item=a[front];
printf("The value %d is removed \n",a[front]);
front=0;
rear=-1;
}
else if(rear<front)
printf("Underflow\n");
else
{
item=a[front];
printf("The value %d is poped out\n",a[front]);
front++;
}
}
void peek()
{
if(rear<front)
printf("The queue is empty\n");
else
{
printf("Peek value of queue=%d\n",a[front]);
printf("\n");
}
}
void display()
{
int i;
if(front>rear)
printf("The queue is empty\n");
else
{
printf("The queue:\n");
for(i=front;i<=rear;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}
