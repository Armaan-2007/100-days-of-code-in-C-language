#include <stdio.h>

enum Colors { RED, GREEN, BLUE = 5, YELLOW };

int main() {
    enum Colors c1 = RED;
    enum Colors c2 = GREEN;
    enum Colors c3 = BLUE;
    enum Colors c4 = YELLOW;

    printf("%d\n", c1);
    printf("%d\n", c2);
    printf("%d\n", c3);
    printf("%d\n", c4);

    return 0;
}
