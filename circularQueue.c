#include<stdio.h>
int front=-1,rear=-1,item,limit,queue[100];
void Enqueue() {
     if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        printf("Enter the value to be stored: ");
        scanf("%d", &item);
        queue[rear] = item;
    } 
     else if ((rear + 1) % limit == front) {
        printf("Overflow\n");
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
        front = -1;
        rear = -1;
    } else {
        item = queue[front];
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
       if(rear<front)
         printf("The queue is empty\n");
       else{
         printf("the queue:");
         for(int i=front;i<=rear;i++)
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
        printf("Enter the choice: \n1.Insertion\n2.Deletion\n3.Print topmost element\n4.Display\n5.Exit\n");
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

