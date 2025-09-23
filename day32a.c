#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, k;

    
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

  
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (k = 0; k < n2; k++) {
        merged[i + k] = arr2[k];
    }

    
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
