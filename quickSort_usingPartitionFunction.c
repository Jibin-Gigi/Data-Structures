#include<stdio.h>
int partition(int a[],int low,int high){
    int pi=a[low];
    int i=low;
    int j=high;
    while(i<j){
        do{
            i++;
        }while(a[i]<=pi);
        do{
            j--;
        }while(a[j]>pi);
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void quickSort(int a[],int low,int high){
    if(low<high){
    int pi=partition(a,low,high);
    quickSort(a,low,pi);
    quickSort(a,pi+1,high);
    }
}

void main(){
    int a[5]={1,8,4,2,9};
    quickSort(a,0,4);
    printf("Sorted array is:");
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
}
