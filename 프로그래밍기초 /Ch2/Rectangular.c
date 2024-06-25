#include<stdio.h>

int main(void)
{
    float length, width, heigh, volume = 0;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter heigh: ", &heigh);
    scanf("%f", &heigh);
    volume = length * width * heigh;
    printf("volume is: %f\n", volume);
}
