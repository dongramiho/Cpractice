#include <stdio.h>

int main(){
    char string[100];
    printf("Enter a string:");
    gets(string);
    for(int i = 0; string[i]; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = string[i] + 32;
        }
    }
    printf("Lowercase string:");
    puts(string);
}