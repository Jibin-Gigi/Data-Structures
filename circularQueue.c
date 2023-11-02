#include<stdio.h>
int front=-1,rear=-1,item,limit,queue[100];
void Enqueue() {
     if ((rear + 1) % limit == front) {
        printf("Overflow\n");
        }
     else if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        printf("Enter the value to be stored: ");
        scanf("%d", &item);
        queue[rear] = item;
    } 
     
    
     else {
        rear = (rear + 1) % limit;
        printf("Enter the value to be stored: ");
        scanf("%d", &item);
        queue[rear] = item;
    }
}

void Dequeue() {
    if (front == -1 && rear == -1) {
        printf("Underflow\n");
    } else if (front == rear) {
        item = queue[front];
        printf("%d is removed",queue[front]);
        front = -1;
        rear = -1;
    } else {
        item = queue[front];
        printf("%d is removed",queue[front]);
        front = (front + 1) % limit;
    }
}

void Peek(){
      if(rear<front)
         printf("The queue is empty\n");
      else
         {
         printf("Peek value of queue=%d",queue[front]);
         printf("\n");
         }
}
void Display(){
       if(front == -1 && rear == -1)
         printf("The queue is empty\n");
       else{
         printf("The queue:");
         for(int i=front;i!=rear;(i+1)%limit)
         {
         printf("%d\t",queue[i]);
         }
         printf("\n");
         }
         
  
}

int main() {
    int choice;
    printf("Enter the Limit: ");
    scanf("%d", &limit);

    do {
        printf("Enter the choice: \n1.Insertion\t2.Deletion\t3.Print peek element\t4.Display\t5.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Peek();
                break;
            case 4:
                Display();
                break;
            case 5:
                break;
            default:
                printf("Invalid input\n");
        }
        
    } while (choice != 5);

    return 0;
}

