#include <stdio.h>

int main() {
    int numbers[100];
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }


    for (i = 0; i < n; i++) {
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}
