#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};
void printStudent(struct Student s) {
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);
}

int main() {
    
    struct Student st = {101, "Rahul", 92.5};
    printStudent(st);

    return 0;
}
