#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("\nPlease type an integer. ");
    scanf("%d", &num1);
    printf("\nPlease type another integer. ");
    scanf("%d", &num2);
    num3 = num1 + num2;
    printf("\nresult = %d\n", num3);
}