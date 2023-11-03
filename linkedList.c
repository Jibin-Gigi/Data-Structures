#include<stdio.h>
#include<stdlib>

struct node{
	int data;
	struct node *link;
	};
struct node *head=NULL;
	
void insert_at_beginning(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	int data;
	printf("Enter the data to be inserted");
	scanf("%d",&data);
	if(temp==NULL){
		printf("No memory space left");
	}
	if(head==NULL){
		temp->data=data;
		temp->link=head;
		head=temp;
	}
	else{
		temp->data=data;
		temp->link=head;
		head=temp;	
	}
	
}	

void insert_at_end(){
	struct node *temp, *ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	int data;
	printf("Enter the data to be inserted: ");
	scanf("%d",&data);
	while(ptr->link!=NULL){
		ptr=ptr->link;
		ptr->link=temp;
		temp->data=data;
		temp->link=NULL;
	}	
}

void inset_at_any_location(){
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	int key;
	printf("Enter the position at after which the new node is to be added: ");
	scanf("%d",&key);
	ptr=head;
	while(ptr->data!=key && ptr->link!=NULL){
		ptr=ptr->link;
	}
		
	
}	
void main(){
    	int choice;
	do{
	     printf("Enter the choice\n 1)Insertion at Beginning\t 2)
		
		
}		





 
