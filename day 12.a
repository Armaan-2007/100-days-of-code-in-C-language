#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        fine = 0;
    } else if (daysLate <= 5) {
        fine = daysLate * 1;  
    } else if (daysLate <= 10) {
        fine = 5 * 1 + (daysLate - 5) * 2;  
    } else {
        fine = 5 * 1 + 5 * 2 + (daysLate - 10) * 5;  
    }

    
    if (fine > 100) {
        fine = 100;
    }

    
    printf("The library fine is ₹%d\n", fine);

    return 0;
}

output:
Enter the number of days the book is late: 3
The library fine is ₹3


  
Enter the number of days the book is late: 25
The library fine is ₹100

