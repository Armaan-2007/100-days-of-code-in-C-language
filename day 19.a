#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    
    max = (num1 > num2) ? num1 : num2;
    lcm = max;

    while (lcm % num1 != 0 || lcm % num2 != 0) {
        lcm++;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

output;
Enter two positive integers: 4 6
LCM of 4 and 6 is 12
