#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2;
    int denominator = 3;

  
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
output -
  Enter the number of terms: 4
Sum of the series up to 4 terms is: 2.1508
