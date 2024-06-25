#include <stdio.h>
int main(){
    int count, max = 5;
    float num, sum, average = 0;
    for(count=0; count < max; count++){
        printf("Enter number %d:", count + 1);
        scanf("%f", &num);
        sum += num;
    }
    average = sum / max;
    printf("Sum:%.2f    Averege: %2f\n", sum, average);
}