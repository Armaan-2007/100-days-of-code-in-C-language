#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, flag = 1;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0; 
            break;
        }
    }

    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
    return 0;
}
