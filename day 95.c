#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int i, top = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[top].marks)
            top = i;
    }
    return s[top];
}

int main() {
    int i, n;
    struct Student s[100], topper;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    topper = findTopper(s, n);

    printf("\nTop Student Details\n");
    printf("Name: %s\n", topper.name);
    printf("Roll: %d\n", topper.roll);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
