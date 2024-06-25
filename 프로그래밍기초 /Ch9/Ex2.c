#include<stdio.h>

int main(){
    char c, message [80];
    int i = 0;
    printf("Enter a string: ");
    while(1){
        c = getchar();
        if(c == '\n' || c == '!')
        break;
        message[i] = c;
        i++;
    }
    message[i] = '\0';
    printf("The entered string is\n");
    for(i = 0; message[i]!= '\0'; i++)
        putchar(message[i]);
}