#include <stdio.h>

void main(){
    int count = 0, max = 5;
    float num, sum, average = 0;
    while(count<max){
        printf("Enter number %d: ", count + 1 );
        scanf("%f", &num);
        sum = sum + num;
        count = count + 1;
    }
    average = sum / max;
    printf("Sum : %.2f  Avarage: %.2f\n", sum, average);
}