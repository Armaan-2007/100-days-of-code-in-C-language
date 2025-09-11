#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, swappedNum;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    int originalNum = num;

    
    lastDigit = num % 10;

    
    int temp = num;
    while (temp != 0) {
        firstDigit = temp;
        temp = temp / 10;
        digits++;
    }

    
    if (digits == 1) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    
    int middlePart = (num % (int)pow(10, digits - 1)) / 10;

    
    swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;


    printf("Original number: %d\n", originalNum);
    printf("Swapped number: %d\n", swappedNum);

    return 0;
}


output 
  Enter a number: 12345
Original number: 12345
Swapped number: 52341
