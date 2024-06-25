#include <stdio.h>
#include <math.h> // pow, sqrt
#define MAX 10
// 평균(mean), difference(편차), standard deviation(표준편차)를 구하는 함수


float sum(float num[]){
    float sum = 0;
    for(int i = 0; i < MAX; i++){
        sum += num[i];
    }
    return sum;
}

float mean(float num[]){
    return sum(num) / MAX;
}

void calculate_differences(float num[], double avg, float diff[]) {
    for(int i = 0; i < MAX; i++) {
        diff[i] = num[i] - avg;
    }
}

double calculate_std(float diff[]){
    double sum_of_squares = 0;
    for(int i = 0; i < MAX; i++){
        sum_of_squares += diff[i] * diff[i];
    }
    return sqrt(sum_of_squares / MAX); // sqrt = 루트
}

int main(){
    float num[MAX];
    float diff[MAX];
    double avg, std = 0;
    printf("Enter 10 real values: ");
    for(int i = 0; i < MAX; i++){
        scanf("%f", &num[i]);
    }
    avg = mean(num);
    calculate_differences(num, avg, diff);
    std = calculate_std(diff);
    printf("Average: %.2f\n", avg);
    printf("Standard Deviation: %.2f\n", std);
}
