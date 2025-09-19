#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOddDigit = 0;  

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  
            product *= digit;
            hasOddDigit = 1;
        }
        num = num / 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits is %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}

output;
Enter a number: 12345
Product of odd digits is 15

