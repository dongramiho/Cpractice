#include <stdio.h>

int printArray(int [], int);
int main(){
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {1, 2, 3, 4, 5};
    printf("Array 1: ");
    printArray(arr1, 3);
    printf("\n");
    printf("Array 2: ");
    printArray(arr2, 5);
}
void printArray(int input[], int len){
    for(int i = 0; i < len; i++){
        printf("%d ", input[i]);
    }
}