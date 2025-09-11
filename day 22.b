#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    
    for (int i = 1; i <= n; i++) {
        float term = (float)(2 * i - 1) / (2 * i);
        sum += term;
    }

  
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}


output-
Enter number of terms: 4
Sum of the series up to 4 terms is: 4.2083
