#include <stdio.h>

int main() {
    int matrix[100][100];
    int diag[100];
    int size, i, j, isDistinct = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
  
    for(i = 0; i < size; i++) {
        diag[i] = matrix[i][i];
    }

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct) break;
    }

    if(isDistinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}
