#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("Enter status (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    scanf("%d", (int*)&s);

    switch(s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status value.\n");
            break;
    }

    return 0;
}
