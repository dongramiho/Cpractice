#include <stdio.h>

int main(){
    int A, B;
    char operation;
    scanf("%d %c %d", &A, &operation, &B);
    switch (operation)
    {
    case '+':
        printf("%d\n", A+B);
        break;
    case '-':
        printf("%d\n", A - B);
        break;
    case '*':
        printf("%d\n", A * B);
        break;
    default:
        printf("%d\n", A / B);
        break;
    }
}