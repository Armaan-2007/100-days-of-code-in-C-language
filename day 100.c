#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    ptr->id = 101;
    ptr->marks = 87.5;

    printf("ID: %d\n", ptr->id);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
