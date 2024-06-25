#include <stdio.h>

int main(){
    char mstatus;
    printf("Read the msatatus(M|S|D|W): ");
    scanf("%c", &mstatus);
    switch (mstatus)
    {
    case 'M':
        printf("Married\n");
        break;
    
    case 'S':
        printf("Single\n");
        break;
    
    case 'D':
        printf("Divorced\n");
        break;
    case 'W':
        printf("Widowed\n");
        break;

    default:
        printf("Invalid code\n");
    }
}