#include <stdio.h>

int main(){
    int i,Sum = 0, min,grade[10];
    for(i = 0; i < 10; i++){
        printf("Enter your grade\n"); 
        scanf("%d", &grade[i]); 
        Sum += grade[i];
        if (i == 0) {
            min = grade[i]; 
        } else if (grade[i] < min) {
            min = grade[i];
        }
    }
    printf("Average: %d\n", Sum / 10);
    printf("Min of array: %d\n", min);
    return 0;
}
