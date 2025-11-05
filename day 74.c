#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *srcFile, *destFile;
    char srcName[100], destName[100];
    int ch;
    printf("Enter the source filename: ");
    scanf("%s", srcName);
    printf("Enter the destination filename: ");
    scanf("%s", destName);
    srcFile = fopen(srcName, "r");
    if (srcFile == NULL) {
        perror("Error opening source file");
        return 1;
    }
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(srcFile);
        return 1;
    }
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", srcName, destName);
    fclose(srcFile);
    fclose(destFile);
    return 0;
}
