#include <stdio.h>
int main(){
    char message[] = "I love C programming.";
    printf("%s\n", message);
    printf("%25s\n", message);
    printf("%-25s",message);
    printf("%25.6s\n", message);
    printf("%-25.6s\n", message);
    puts(message);
}