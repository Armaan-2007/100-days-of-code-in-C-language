#include <stdio.h>

int main() {
    int A[100][100], B[100][100], result[100][100];
    int m, n, p, q, i, j, k;
    printf("Enter rows and columns of first matrix (A): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix (B): ");
    scanf("%d %d", &p, &q);
    if(n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResult of Matrix Multiplication (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
