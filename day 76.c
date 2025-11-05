#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char buffer[256];
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;  
    }

    printf("\n--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    printf("\n--- End of File ---\n");

    fclose(file);

    return 0;
}
