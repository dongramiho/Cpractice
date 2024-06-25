#include <stdio.h>

int main()
{
    float weight, height, BMI;
    printf("Enter your weight in kilogrm: ");
    scanf("%f", &weight);
    printf("Enter your Heigh in meter: ");
    scanf("%f", &height);
    BMI = weight / (height * height);
    printf("Your BMI is: %f\n", BMI);

    printf("BMI VALUES\n");
    if (BMI < 18.5){
        printf("You are Underweight\n");
    }
    else if (BMI <24.9){
        printf("You are Normal\n");
    }
    else if (BMI < 29.9){
        printf("You are overweight");
    }
    else {
        printf("You are obese");
    }

}