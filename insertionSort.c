#include<stdio.h>
void main(){
	int n,temp,i,j;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	int array[n];
	printf("Enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	i=1;
	
	while(i<n ){
		
		j=i;
		while(array[j]<array[j-1] && j>0){
			temp=array[j];
			array[j]=array[j-1];
			array[j-1]=temp;
			j--;	
		}
		
		i++;
	}  
	printf("The sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
}
