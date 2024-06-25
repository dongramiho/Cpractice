#include <stdio.h>

int main()
{
    int num1 = 15; //0b1111 15에 대한 2진수
    int num2 = 5;  //0b0101 5에 대한 2진수
    int result = num1 ^ num2; // XOR operation 두 개의 불리언 값이 주어졌을 때 둘 중 하나만이 참(True)일 때 결과가 참이 되는 연산

    printf("num1:%d\n", num1);
    printf("num2: %02d\n", num2);
    printf("num1 XOR num2: %d\n", result);
}