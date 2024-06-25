#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int oddSum = 0, evenSum = 0;
    
    printf("Enter 5 integer numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5); //for문사용으로 줄이기 간으 

    if (num1 % 2 == 0) {
        evenSum += num1;
    } else {
        oddSum += num1;
    }

    if (num2 % 2 == 0) {
        evenSum += num2;
    } else {
        oddSum += num2;
    }

    if (num3 % 2 == 0) {
        evenSum += num3;
    } else {
        oddSum += num3;
    }

    if (num4 % 2 == 0) {
        evenSum += num4;
    } else {
        oddSum += num4;
    }

    if (num5 % 2 == 0) {
        evenSum += num5;
    } else {
        oddSum += num5;
    }

    printf("Sum of odd numbers: %d\n", oddSum);
    printf("Sum of even numbers: %d\n", evenSum);

    return 0;
}
