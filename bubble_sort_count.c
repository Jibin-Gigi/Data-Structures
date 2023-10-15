#include <stdio.h>
void main()
{
int n,i,j,a[100],swap,count=0;
count++;
printf("Enter the number of elements:");
scanf("%d",&n);
count++;
printf("Enter the elements: \n");
for(i=0;i<n;i++)
{
    count++;
    scanf("%d",&a[i]);
    count++;
    
}
count++;
for(i=0;i<n-1;i++){
    count++;
    for(j=0;j<n-i-1;j++)
    {
        count++;
        if(a[j]>a[j+1])
        {
            count++;
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
            count++;
            count++;
            count++;
        }
        count++;
    }
    count++;
}
count++;
printf("\nNo is in acending order\n");
for(i=0;i<n;i++){
    count++;
    printf("%d\t",a[i]);
    count++;
}
count++;
count++;
count++;

printf("\nTime Complexity =%d \nSpace Complexity=%d",count,5*4+4*n);

}