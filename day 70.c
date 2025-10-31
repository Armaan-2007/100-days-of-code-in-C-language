#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    int i = 0;
    int new_sentence = 1;  

    while (str[i] != '\0') {
        if (new_sentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);   
            new_sentence = 0;
        } else {
            str[i] = tolower(str[i]);   
        }

      
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            new_sentence = 1;
        }

        i++;
    }

    printf("Sentence case: %s", str);
    return 0;
}
