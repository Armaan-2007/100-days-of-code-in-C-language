#include <stdio.h>

int main() {
    float percentage;

    
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70 && percentage < 80) {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60 && percentage < 70) {
        printf("Grade: D\n");
    } 
    else if (percentage >= 0 && percentage < 60) {
        printf("Grade: F\n");
    }
    else {
      
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    }

    return 0;
}
output;
Enter your percentage: 85
Grade: B
