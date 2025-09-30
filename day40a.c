#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    for(int d = 0; d < rows + cols - 1; d++) {
        for(int i = 0; i <= d; i++) {
            int j = d - i;
            if(i < rows && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
