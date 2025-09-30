#include <stdio.h>

int main() {
    int matrix[100][100];
    int i, j, size, isSymmetric = 1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
  
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if(isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}
