#include <stdio.h>
#include <string.h>
#include <ctype.h>


void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    int start = 0, i = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            reverse(sentence, start, i - 1);
            start = i + 1;
        }
        i++;
    }

  
    if (i > start)
        reverse(sentence, start, i - 1);

    printf("Reversed words: %s", sentence);

    return 0;
}
