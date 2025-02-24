#include <stdio.h>

int main() {
  int v[5] = {0, 1, 2, 3, 4};

  for (int i = 0; i < 5; i++) {
    printf("v[%d] = %d, &v[%d] = %p\n", i, v[i], i, &v[i]);
  }

  printf("v[6] = %d, &v[6] = %p\n", v[6], &v[6]); // garbage of memory

  return 0;
}