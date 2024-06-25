#include <stdio.h>

int main(){
    double r, PI = 3.141592 ; //const double PI
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Radius (r): %.2f\n", r);
    printf("Circle's Area (a): %.2f\n", PI * r * r);
    printf("Circumference (c): %.2f\n", 2 * PI * r);
}