#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char text[256];
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    getchar();
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, file);
    printf("Text appended successfully to '%s'.\n", filename);
    fclose(file);
    return 0;
}
