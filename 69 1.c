#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (with one repeated): ", n);

    int xor_all = 0;
    int xor_arr = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_arr ^= arr[i];   
        if (i < n - 1) {
            xor_all ^= (i + 1);  
        }
    }

    int repeated = xor_all ^ xor_arr;
    printf("The repeated element is: %d\n", repeated);

    return 0;
}
