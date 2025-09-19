#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
output

Enter first number (a): 10
Enter second number (b): 20
Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10
