#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, temp;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

  
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < n / 2; i++) {
        temp = numbers[i];
        numbers[i] = numbers[n - 1 - i];
        numbers[n - 1 - i] = temp;
    }

    
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
