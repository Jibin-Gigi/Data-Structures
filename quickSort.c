#include<stdio.h>
void quicksort(int array[],int first,int last){
    int pivot,j,temp,i;
     if(first<last){
         pivot=first;
         i=first;
         j=last;
         while(i<j){
             while(array[i]<=array[pivot]&&i<last)
                 i++;
             while(array[j]>array[pivot])
                 j--;
             if(i<j){
                 temp=array[i];
                  array[i]=array[j];
                  array[j]=temp;
             }
         }
         temp=array[pivot];
         array[pivot]=array[j];
         array[j]=temp;
         quicksort(array,first,j-1);
         quicksort(array,j+1,last);
    }
}

void main(){
  int size,i;
  printf("Enter size of the array: ");
  scanf("%d",&size);
  int array[size];
  printf("Enter the elements: ");
  for(i=0;i<size;i++)
    scanf("%d",&array[i]);
  quicksort(array,0,size-1);
  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",array[i]);
}


