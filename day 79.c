#include <stdio.h>
int main() {
    FILE *file;
    char filename[] = "numbers.txt";
    int num, count = 0;
    long sum = 0;
    double avg;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(file);
    if (count > 0) {
        avg = (double)sum / count;
        printf("Sum = %ld\n", sum);
        printf("Average = %.2f\n", avg);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}
