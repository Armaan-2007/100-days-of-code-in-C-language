#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;  // Make the number positive for reversal
    }

    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    
    if (isNegative) {
        reversed = -reversed;
    }

    
    printf("Reversed number: %d\n", reversed);

    return 0;
}
output;
Enter a number: 3456
Reversed number: 6543


Enter a number: -120
Reversed number: -21
