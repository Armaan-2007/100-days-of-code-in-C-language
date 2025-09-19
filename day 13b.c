#include <stdio.h>

int main() {
    int n;
    int i = 1;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    while (i <= n) {
        printf("%d ", i);
        i++;  // Increase i by 1
    }

    return 0;
}


output;
Enter a number: 5
1 2 3 4 5
