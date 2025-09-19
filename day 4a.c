#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;  // Step 1: sum stored in a
    b = a - b;  // Step 2: original a assigned to b
    a = a - b;  // Step 3: original b assigned to a

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
output 
Enter first number (a): 15
Enter second number (b): 30
Before swapping: a = 15, b = 30
After swapping: a = 30, b = 15
