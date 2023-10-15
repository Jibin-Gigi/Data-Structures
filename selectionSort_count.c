#include<stdio.h>
void main()
{
    int min_index,n,i,j,count=0;
    count++;
    printf("Enter the no. of Elements: ");
    scanf("%d",&n);
    count++;
    int array[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        count++;
        scanf("%d",&array[i]);
        count++;
    }
    count++;
    //Sorting
    for(i=0;i<n;i++){
        count++;
        min_index=i;
        count++;
        for(j=i+1;j<n;j++){
            count++;
            if(array[j]<array[min_index]){
                count++;
                min_index=j;
                count++;
            }
            count++;
        
        }
        count++;
        int temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
        count++;
        count++;
        count++;
    }
    count++;

    //Printing
    for(i=0;i<n;i++){
        count++;
        printf("%d\t",array[i]);
        count++;
    }
    printf("\nTime Complexity=%d \nSpace Complexity=%d",count,6*4+4*n);
}