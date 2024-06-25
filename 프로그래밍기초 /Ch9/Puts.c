#include <stdio.h>
int main(){
    char message[] = "I love C programming.";
    printf("%s\n", message);
    printf("%25s%25.6s\n", message, message); 
    /*
    %25s는 문자열을 최소 25자 너비로 출력하도록 지정합니다.
    %25.6s는 문자열을 최소 25자 너비로 출력하되, 최대 6자까지만 출력하도록 지정합니다
    */
    puts(message);
}