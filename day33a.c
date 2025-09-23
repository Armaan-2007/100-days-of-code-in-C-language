#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, searchElement;
    int low, high, mid;
    int found = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

  
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

  
    low = 0;
    high = n - 1;

    
    while (low <= high) {
        mid = (low + high) / 2;

        if (numbers[mid] == searchElement) {
            found = 1;
            break;
        } else if (numbers[mid] < searchElement) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    
    if (found) {
        printf("Element %d found at position %d (index %d).\n", searchElement, mid + 1, mid);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
