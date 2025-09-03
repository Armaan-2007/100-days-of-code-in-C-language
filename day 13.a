#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (op == '+') {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (op == '-') {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (op == '*') {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (op == '/') {
        if (num2 == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
    }
    else if (op == '%') {
        if (num2 == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        }
    }
    else {
        printf("Invalid operator.\n");
    }

    return 0;
}


output;
Enter an operator (+, -, *, /, %): -
Enter two numbers: 15 7
15 - 7 = 8
