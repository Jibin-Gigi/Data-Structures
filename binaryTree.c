#include<stdio.h>

void main(){
	int noOfNodes;
	printf("Enter the no. of nodes: ");
	scanf("%d",&noOfNodes);
	int nodes[noOfNodes];
	printf("Enter the elements: \n");
	for(int i=0;i<noOfNodes;i++){
		scanf("%d",&nodes[i]);
	}
	
	int pos;
	printf("Enter the position of node you want to get details of: ");
	scanf("%d",&pos);
	int parent=pos/2, RC=(pos*2)+1, LC=pos*2;
	if( parent!=0)
		printf("Parent=%d \n",parent);
	else 
		printf("There is no parent for the node\n");
	if(LC>noOfNodes)
		printf("There is no left child for the node\n");
	else
		printf("LC=%d\n",LC);
		
	if(RC>noOfNodes)
		printf("There is no right child for the node\n");
	else
		printf("RC=%d \n",RC);
		
	
	
	
}
