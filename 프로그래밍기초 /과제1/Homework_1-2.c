#include <stdio.h>

int main()
{
    int number;
    printf("Enter five digit number: ");
    scanf("%d", &number);
    printf("%d  ", number / 10000);
    number = number % 10000;
    printf("%d  ", number / 1000);
    number = number % 1000;
    printf("%d  ", number / 100);
    number = number % 100;
    printf("%d  ", number / 10);
    number = number % 10;
    printf("%d\n", number);
}