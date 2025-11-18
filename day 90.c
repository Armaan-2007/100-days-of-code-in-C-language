#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p = {"Alex", MALE};

    printf("Name: %s\n", p.name);
    printf("Gender: %d\n", p.gender);

    return 0;
}
