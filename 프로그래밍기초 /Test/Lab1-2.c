#include <stdio.h>

int main(){
    int i;
    float sum = 0, Grade, Scholarship, subject = 3;
    float score, Average = 0;
    for(i = 1; i <= subject; i++){
        printf("Enter the socre for subject %d: ", i);
        scanf("%f", &score);
        sum += score;
    }
    Average = sum / subject;
    printf("Average score: %.2f\n", Average);

    if(Average <= 100 && Average >= 90){
        printf("Grade : A\n");
        printf("Scholarship: 700000\n");
    }
    else if(Average <= 89 && Average >= 80){
        printf("Grade : B\n");
        printf("Scholarship: 300000\n");
    }
    else if(Average <= 79 && Average >= 70){
        printf("Grade : C\n");
        printf("Scholarship: 100000\n");
    }
    else if(Average <= 69 && Average >= 60){
        printf("Grade : D\n");
        printf("Scholarship: 0\n");
    }
    else{
        printf("Grarde : F\n");
        printf("Scholarship : 0\n");
    }
}