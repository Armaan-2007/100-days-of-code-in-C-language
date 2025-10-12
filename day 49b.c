#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char surname[50];  
    int i = 0, len;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);


    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    int start = 0;
    while (name[i] != '\0') {
        
        if (i == 0 || name[i - 1] == ' ') {
      
            int j = i;
            while (name[j] != ' ' && name[j] != '\0') j++;

            if (name[j] != '\0') {
                printf("%c. ", toupper(name[i]));
            } else {
                
                strcpy(surname, &name[i]);
                break;
            }
        }
        i++;
    }

    printf("%s\n", surname);

    return 0;
}
