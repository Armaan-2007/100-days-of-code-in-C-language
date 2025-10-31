#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers between 0 and %d (one missing): ", n, n);

    long long actual_sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }

    long long expected_sum = (long long)n * (n + 1) / 2;
    long long missing_number = expected_sum - actual_sum;

    printf("The missing number is: %lld\n", missing_number);
    return 0;
}
