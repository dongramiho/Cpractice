#include <stdio.h>
#include <math.h>

void compare(int n1, int n2){
    if(n1 > n2){
        printf("The bigger integer: %d\n", n1);
        }
        else if(n1 < n2){
            printf("The bigger integer: %d\n", n2);
        }
        else{
            printf("The two integers are equal: %d, %d\n", n1, n2);
        }
    }
void power(int n1, int n2){
    printf("%d^%d is %.2lf\n", n1, n2, pow(n1, n2));
}
int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    compare(n1, n2);
    power(n1, n2);
}
