#include <stdio.h> 
#include <string.h> // strcat 사용을 위해 추가

int main(){
    char string1[20], string2[20];
    printf("Enter the first string:"); 
    // gets_s 사용시 컴파일불가로 인해 gets사용(개행문자 포함x)
    gets(string1);
    printf("Enter the second string:");
    gets(string2); 
    strcat(string1, string2); 
    puts(string1); 
}