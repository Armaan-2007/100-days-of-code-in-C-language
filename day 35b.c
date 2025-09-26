#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    
    k = k % n;

  
    int rotated[100];

  
    for(int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    
    for(int i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

  
    printf("Array after right rotation by %d positions:\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
