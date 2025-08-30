#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is positive.\n", num);
    } else {
        if (num < 0) {
            printf("%d is negative.\n", num);
        } else {
            printf("%d is zero.\n", num);
        }
    }

    return 0;
}

output ;
Enter an integer: 10
10 is positive.
Enter an integer: -5
-5 is negative.
