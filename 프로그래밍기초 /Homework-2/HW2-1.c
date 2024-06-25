#include <stdio.h>
int main() {
    int max = 1000;
    int sum = 0;
    int count;

    for (count = 0; count < max; count++ ) {
        if (count % 2 == 1){
            sum += count;
        }
    }
    printf("Final sum : %d\n", sum);
}