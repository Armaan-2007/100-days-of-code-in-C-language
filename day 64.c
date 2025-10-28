#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256 // Total possible ASCII characters

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[CHAR_RANGE]; 
    for (int i = 0; i < CHAR_RANGE; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; 

    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1; 
        }
        lastIndex[(int)s[i]] = i; 
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
