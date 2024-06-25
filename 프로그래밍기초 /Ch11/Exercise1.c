#include <stdio.h>

    void compare(int n1, int n2){
        if(n1 > n2){
            printf("The bigger integer: %d\n", n1);
        }
        else if(n1 < n2){
            printf("The bigger integer: %d\n", n2);
        }
        else{
            printf("The two integers are equal\n");
        }
    }
int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    //bigeger = compare(n1, n2)를 줘서 return (n1 >n2 ? n1 : n2)를 해줘도 된다.
    compare(n1, n2);
}