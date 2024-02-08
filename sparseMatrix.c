//Converting Tuple matrix to Sparse Matrix

#include <stdio.h>
struct sparse{
    int data;
    int row;
    int col;
};
void main(){
    printf("Enter the no.of non-zero values: ");
    int value;
    scanf("%d",&value);
    struct sparse b[value+1];
    printf("Enter the tuple matrix: \n");
    for(int i=0;i<=value;i++){
        scanf("%d",&b[i].row);
        scanf("%d",&b[i].col);
        scanf("%d",&b[i].data);
    }
    printf("Given tuple matrix is: \n");
    for(int i=0;i<=value;i++){
        printf("%d ",b[i].row);
        printf("%d ",b[i].col);
        printf("%d\n",b[i].data);
    }
    int sparse[b[0].row][b[0].col];
    
    for(int i=0;i<b[0].row;i++){
        for(int j=0;j<b[0].col;j++) {
            sparse[i][j]=0;
        }
    }
    for (int i = 1; i <= value; i++) {
        sparse[b[i].row][b[i].col] = b[i].data;
    }

    printf("The sparse matrix is:\n");
    for(int i=0;i<b[0].row;i++){
        for(int j=0;j<b[0].col;j++) {
            printf("%d ",sparse[i][j]);
        }
        printf("\n");
    }
}
