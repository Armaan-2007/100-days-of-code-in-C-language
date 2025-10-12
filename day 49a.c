#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (isalpha(name[0])) {
        printf("%c. ", toupper(name[0]));
    }
  
    while (name[i] != '\0') {
      
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c. ", toupper(name[i + 1]));
        }
        i++;
    }

    return 0;
}
