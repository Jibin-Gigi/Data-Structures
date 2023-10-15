#include<stdio.h>
struct polynomial
{
   int coefficients;
   int exponents;
}x[30];

void sortTerms(int n) {
    struct polynomial temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j].exponents < x[j + 1].exponents) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

void main(){
    int n;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the coefficient of term %d : ",i+1);
        scanf("%d",&x[i].coefficients);
        printf("Enter the power of term %d : ",i+1);
        scanf("%d",&x[i].exponents);

    }
    
sortTerms(n);
printf("\nThe polynomial is\n");
for(int i=0;i<n;i++){
    printf(" %dx^%d ",x[i].coefficients,x[i].exponents);
    if(i<n-1){
        printf("+");
    }

}


}