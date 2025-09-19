#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("Time is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
output
Enter time in seconds: 3665
Time is 01:01:05
