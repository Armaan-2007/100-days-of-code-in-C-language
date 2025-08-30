#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c;
    float discriminant, root1, root2;

  
    printf("Enter values for a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) {
        
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root = %.2f\n", root1);
    } 
    else {
        
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
output;
Enter values for a, b and c: 1 -3 2
Roots are real and different.
Root 1 = 2.00
Root 2 = 1.00
