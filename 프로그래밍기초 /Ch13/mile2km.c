#include <stdio.h>
#define MAXNUM 5

void mile2km(float[MAXNUM]);
int main(){
    float mile[MAXNUM] = {1, 2, 3, 4, 5};
    mile2km(mile);
}

void mile2km(float local_array[]){
    for(int i = 0; i < MAXNUM; i++)
    printf("%.2f\t", local_array[i]*1.6093);
}