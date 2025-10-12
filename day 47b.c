#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char word[100], longest[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

  
    while (1) {
        char ch = sentence[i];

        if (ch != ' ' && ch != '\n' && ch != '\0') {
            word[j++] = ch;
        } else {
            word[j] = '\0';  
            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, word);
            }
            j = 0;  
        }

        if (ch == '\0')
            break;

        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}


