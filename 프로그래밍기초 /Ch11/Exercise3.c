#include <stdio.h>

int n1, n2; // global variable
void exchange(int n1, int n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("After exchanging: %d %d\n", n1, n2);
}
int main() {
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    exchange(n1, n2);
}