#include <stdio.h>
int main(){
    
    int matrix[3][3];
    printf("Enter elements of the matrix by row major\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the address of the matrix along with number is as below .\n----------------------\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d->%d\t",matrix[i][j],&matrix[i][j]);
        }
        printf("\n");
    }
    
}