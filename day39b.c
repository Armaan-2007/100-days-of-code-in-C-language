#include <stdio.h>

int main() {
    int matrix[100][100];
    int size, i, j, sum = 0;

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
        sum += matrix[i][i];
    }
    printf("\nSum of main diagonal elements: %d\n", sum);

    return 0;
}
