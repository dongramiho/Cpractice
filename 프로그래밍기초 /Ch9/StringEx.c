#include <stdio.h>

int main(){
    char message[10]= "Happy";
    for(int i = 0; i < 10; i++)
        printf("Message[%d] = %c\n", i, message[i]);
}