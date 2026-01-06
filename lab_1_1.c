#include <stdio.h>
int main(){
    int row,column;
    printf("enter row and column for matrix :");
    scanf("%d %d",&row,&column);
    int matrix[row][column];
    printf("Enter elements of the matrix by row major\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the entered matrix is as below\n----------------------\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
