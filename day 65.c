#include <stdio.h>
#include <string.h>



int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    int countS[CHAR_RANGE] = {0};
    int countT[CHAR_RANGE] = {0};

    for (int i = 0; i < lenS; i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }

    for (int i = 0; i < CHAR_RANGE; i++) {
        if (countS[i] != countT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
