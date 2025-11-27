#include <stdio.h>
#include <string.h>

struct Data {
    int x;
    char str[50];
};

int main() {
    struct Data a, b;

    scanf("%d", &a.x);
    scanf("%s", a.str);

    scanf("%d", &b.x);
    scanf("%s", b.str);

    if (a.x == b.x && strcmp(a.str, b.str) == 0)
        printf("Identical");
    else
        printf("Not identical");

    return 0;
}
