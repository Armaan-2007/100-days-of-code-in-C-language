#include <stdio.h>

int main() {
    int num, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is Not a Perfect Number.\n", num);
    }

    return 0;
}


output-
Enter a number: 6
6 is a Perfect Number.
Enter a number: 10
10 is Not a Perfect Number.
