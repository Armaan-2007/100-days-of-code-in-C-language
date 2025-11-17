#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;
    int input;

    printf("Enter role (0 for ADMIN, 1 for USER, 2 for GUEST): ");
    scanf("%d", &input);
    role = (enum UserRole)input;

    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
            break;
    }

    return 0;
}
