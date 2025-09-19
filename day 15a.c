#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;  

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    
    else if (num == 0 || num == 1) {
        printf("The factorial of %d is 1\n", num);
    }
    
    else {
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        printf("The factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}


output;
Enter a number: 5
The factorial of 5 is 120
Enter a number: 0
The factorial of 0 is 1

