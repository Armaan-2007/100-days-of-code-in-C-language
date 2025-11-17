#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
