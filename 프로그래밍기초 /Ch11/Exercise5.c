#include <stdio.h>
#include <math.h>

#define SIZE 10

int main() {
    double values[SIZE];
    double sum = 0.0, mean, variance = 0.0, stdDeviation;
    int i;

    printf("Enter %d real values:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Value %d: ", i + 1);
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    mean = sum / SIZE;

    for (i = 0; i < SIZE; i++) {
        variance += pow(values[i] - mean, 2);
    }

    variance /= SIZE;
    stdDeviation = sqrt(variance);

    printf("Mean: %.2lf\n", mean);
    printf("Standard Deviation: %.2lf\n", stdDeviation);

    return 0;
}
