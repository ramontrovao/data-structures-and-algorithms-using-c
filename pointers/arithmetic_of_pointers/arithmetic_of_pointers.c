#include <stdio.h>

int main() {
  int v[5] = {5, 4, 3, 2, 1};

  for (int i = 0; i < 5; i++) {
    printf("&v = %p, v = %p, v[%d] = %d, &v[%d] = %p\n", &v, v, i, v[i], i, &v[i]);
    printf("&v = %p, v = %p, *(v + %d) = %d, v + %d = %p\n", &v, v, i, *(v + i), i, v + i);

    printf("---------------------------------\n");
  }

  return 0;
}