#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

  
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid input! Only binary digits (0 or 1) are allowed.\n");
            return 1; 
        }
    }

    printf("1's complement is: %s\n", binary);

    return 0;
}
output;
Enter a binary number: 101010
1's complement is: 010101
