#include <stdio.h>

int main() {
    int arr[100];
    int n, i, insertElement, position;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to insert: ");
    scanf("%d", &insertElement);

    
    position = n;  
    for (i = 0; i < n; i++) {
        if (insertElement < arr[i]) {
            position = i;
            break;
        }
    }

    
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }


    arr[position] = insertElement;
    n++;  

    
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
