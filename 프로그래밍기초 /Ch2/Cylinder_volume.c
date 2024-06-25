#include <stdio.h>
#include <math.h>

int main()
{
    float radius, heigh, volume;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter heigh: ");
    scanf("%f", &heigh);
    volume = radius * radius * M_PI * heigh;
    printf("volume is: %f\n", volume);
}