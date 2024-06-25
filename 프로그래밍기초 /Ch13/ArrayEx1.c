#include <stdio.h>

int maximum(int [], int);
int main(){
    int values[5],i, max;
    printf("Enter 5 integers: ");
    for(i=0; i<5; i++)
        scanf("%d", &values[i]);
    max = maximum(values, 5);
    printf("Maximum value is %d\n", max);
}
int maximum(int values[], int n){
    int max = values[0];
    for(int i=1; i<n; i++){
        if(values[i] > max)
            max = values[i];
    }
    return max;
}