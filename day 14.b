#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {  
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, product);

    return 0;
}
output;
Enter a number: 6
Product of even numbers from 1 to 6 = 48
