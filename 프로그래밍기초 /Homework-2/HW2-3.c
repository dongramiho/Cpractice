#include <stdio.h>

int main(){
    int count = 0, sum = 0, Max = 5;
    float num = 0; 
    
    do{
        printf("Enter a number : ");
        scanf("%f", &num);
        sum += num;
        count++;
    } while (count < Max);

    printf("Sum of five numbers : %d\n", sum);

}