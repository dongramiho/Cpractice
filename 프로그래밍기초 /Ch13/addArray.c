#include <stdio.h>

void printArray(int [], int);
void addArray(int[], int, int);
int main(){
    int arr1[3] = {1, 2, 3};
    printArray(arr1, 3);
    printf("\n");
    addArray(arr1, 3, 5);
    printArray(arr1, 3);
}
void printArray(int input[], int len){
    for(int i = 0; i < len; i++){
        printf("%d ", input[i]);
    }
}

void addArray(int input[], int len, int add){
    for(int i = 0; i < len; i++){
        input[i] += add;
    }
}