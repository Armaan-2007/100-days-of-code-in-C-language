#include <stdio.h>

int main() {
    int lines[] = {1, 3, 5, 3, 1}; 
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < lines[i]; j++) {
            printf("*\n");
        }
        if (i < 4) {
            printf("\n"); 
        }
    }

    return 0;
}
