#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("All substrings:\n");


    for (i = 0; i < len; i++) {
        
        for (j = i; j < len; j++) {
          
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
