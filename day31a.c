#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, searchElement, found = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    for (i = 0; i < n; i++) {
        if (numbers[i] == searchElement) {
            found = 1;
            break;
        }
    }

    
    if (found) {
        printf("Element %d found at position %d (index %d).\n", searchElement, i + 1, i);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
