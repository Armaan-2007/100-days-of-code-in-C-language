#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++;  

        if (ch == '\n')
            lines++;  
        if (isspace(ch)) {
            inWord = 0;  
        } else if (inWord == 0) {
            inWord = 1;  
            words++;
        }
    }

    fclose(file);

    printf("\nFile: %s\n", filename);
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
