#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
  
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
output
  Enter temperature in Celsius: 25
Temperature in Fahrenheit: 77.00
