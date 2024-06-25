#include <stdio.h>

int main() 
{
    float num1, num2, absolute_difference;

    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2); //scanf("%f %f, &num1, &num2:") 로 짧게 대체 가능

        if (num1 > num2) {
        absolute_difference = num1 - num2;
        } 
        else if (num2 > num1) {
        absolute_difference = num2 - num1;
        } 
        else {
        absolute_difference = 0; }

    if (absolute_difference > 0.001) {
        printf("approxDiff = 0\n");
    }  else {
        printf("approxDiff = %.3f\n", absolute_difference / 2.0);
    }

    return 0;
    }