#include <stdio.h>
int main() {
    int i, max, sum;
    max = 100;
    sum = 0;
    i = 1;
    while (i <= max) {
        sum = sum + i;
        i++;
    }
    /*
     for (int i = 1; i <= max; i++) {
        sum = sum + i; for문으로도 가능
    }
    */
    printf("sum = %d\n", sum);
}
