#include <stdio.h>

int main(){
    int i;
    float Prices[4] = {16.24, 18.98, 23.75, 19.54};
    printf("prices:");
    for(i = 0; i < 4; i++){
        if (i == 0) {
            printf(" %.2f", Prices[i]); 
        } else {
            printf(", %.2f", Prices[i]); 
        }
    }
    return 0;
}
