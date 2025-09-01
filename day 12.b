#include <stdio.h>

int main() {
    int units;
    float amount, surcharge, totalBill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        amount = units * 1.50;
    } else if (units <= 150) {
        amount = 50 * 1.50 + (units - 50) * 2.00;
    } else if (units <= 250) {
        amount = 50 * 1.50 + 100 * 2.00 + (units - 150) * 3.00;
    } else {
        amount = 50 * 1.50 + 100 * 2.00 + 100 * 3.00 + (units - 250) * 5.00;
    }
    
    surcharge = amount * 0.20;

    totalBill = amount + surcharge;

    printf("Electricity Bill = ₹%.2f\n", totalBill);

    return 0;
}


output:
Enter electricity units consumed: 45
Electricity Bill = ₹81.00



Enter electricity units consumed: 200
Electricity Bill = ₹410.00



Enter electricity units consumed: 300
Electricity Bill = ₹710.00

