#include <stdio.h>

int main() {
    int num, oddSum = 0, evenSum = 0;
    
    printf("Enter 5 integer numbers:\n");

    printf("1st number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        evenSum += num;
    } else {
        oddSum += num;
    }

    printf("2nd number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        evenSum += num;
    } else {
        oddSum += num;
    }

    printf("3rd number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        evenSum += num;
    } else {
        oddSum += num;
    }

    printf("4th number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        evenSum += num;
    } else {
        oddSum += num;
    }

    printf("5th number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        evenSum += num;
    } else {
        oddSum += num;
    }

    printf("Sum of odd numbers: %d\n", oddSum);
    printf("Sum of even numbers: %d\n", evenSum);

    return 0;
}
