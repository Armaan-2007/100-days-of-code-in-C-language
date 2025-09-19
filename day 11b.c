#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit = %.2f\n", profitOrLoss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss = %.2f\n", profitOrLoss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        
        printf("No profit, no loss.\n");
    }

    return 0;
}
output;
Enter Cost Price: 100
Enter Selling Price: 120
Profit = 20.00
Profit Percentage = 20.00%
Loss = 30.00
Loss Percentage = 20.00%
Enter Cost Price: 200
Enter Selling Price: 200
No profit, no loss.
