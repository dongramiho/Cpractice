#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    int roll = rand() % 6 + 1; // 1~6
    printf("Roll %d: %d\n", i + 1, roll);
  }

  return 0;
}
