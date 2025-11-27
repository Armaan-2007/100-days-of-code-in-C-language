#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    float marks;
    char name[30];
};

int main() {
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s->roll);
    printf("Marks       : %.2f\n", s->marks);
    printf("Name        : %s\n", s->name);
    free(s);
    return 0;
}
