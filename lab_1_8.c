#include <stdio.h>

int main(){

    int row,column;
    
    printf("enter row and column for matrix :");
    scanf("%d %d",&row,&column);
    int matrix[row][column];
    int i,j;
    printf("which element addres you want to find out :");
    scanf("%d %d",&i,&j);
    int *base = &matrix[0][0];
    int *row_major = base + i*column + j;
    int *col_major = base + j*row + i;
    int *actual = &matrix[i][j];
    printf("row : %p\ncolumn : %p\nactual : %p\n",(void*)row_major,(void*)col_major,(void*)actual);
    return 0;

}


