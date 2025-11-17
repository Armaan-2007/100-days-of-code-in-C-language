#include <stdio.h>

enum Months {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Months month;
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *monthNames[] = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    for(month = JANUARY; month <= DECEMBER; month++) {
        printf("%s has %d days\n", monthNames[month], days[month]);
    }

    return 0;
}
