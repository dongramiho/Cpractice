#include <stdio.h>

int square(int);
int square(int x){
    return x * x;
}

int main() {
    int n1, n2;
    printf("Enter two integers(a<b): ");
    scanf("%d %d", &n1, &n2);
   printf("Square between %d and %d: \n", n1, n2);
   for (int i = n1; i <= n2; i++){
       printf("%d ", square(i));
   }
}
