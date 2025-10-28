#include <stdio.h>

void sortArray(int arr[], int n) {
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }
    sortArray(arr, n);
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
