#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    
  
    for (i = 0; num > 0; i++) {
        binary[i] = num % 2;  
        num = num / 2;
    }
    
    printf("Binary representation: ");
  
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    
    return 0;
}


Enter a number: 13
Binary representation: 1101

