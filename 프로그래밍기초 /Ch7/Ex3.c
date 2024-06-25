#include <stdio.h>

int main(){
    int num1[5], num2[5];
    printf("Enter 5 integers\n");
    for(int i = 0; i <5; i++){
        printf("Integer %d: ", i + 1);
        scanf("%d", &num2[i]);
    }
    for (int i = 0; i < 5; i++)
        num1[i] = num2[i];
    for(int i = 0; i < 5; i++)
        printf("\n[%d]num1 = %d amd num2 = %d", i, num1[i], num2[i]);
}
