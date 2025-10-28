#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d elements of first sorted array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d elements of second sorted array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d ", merged[idx]);
    }
    printf("\n");

    return 0;
}
