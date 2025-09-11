#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp = temp / 10;
    }

    
    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is Not a Strong Number.\n", num);
    }

    return 0;
}

output-
  Enter a number: 145
145 is a Strong Number.
    Enter a number: 123
123 is Not a Strong Number.


