#include <stdio.h>

int main() {
    int numbers[100];   
    int n, i, sum = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < n; i++) {
        sum += numbers[i];
    }


    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
