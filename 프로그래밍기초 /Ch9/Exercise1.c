#include <stdio.h>

int main(){
    char c;
    int i = 0;
    printf("Enter a string: ");
    while(1){
        c = getchar();
        if(c == '!')
        break;
        else if (c =='\n') continue;
        else{
            putchar(c);
            putchar('\n');
        }
    }
       printf("Exiting the program!\n");
}