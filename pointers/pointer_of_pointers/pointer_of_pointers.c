#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  int* p1 = &n;
  int** p2 = &p1;

  printf("n = %d, &n = %p \n", n, &n);
  printf("p1 = %p, &p1 = %p \n", p1, &p1);
  printf("p2 = %p, &p2 = %p, *p2 = %p, **p2 = %d \n", p2, &p2, *p2, **p2);

  **p2 = 99;

  printf("n = %d, &n = %p \n", n, &n);
  printf("p1 = %p, &p1 = %p \n", p1, &p1);
  printf("p2 = %p, &p2 = %p, *p2 = %p, **p2 = %d \n", p2, &p2, *p2, **p2);

  return 0;
}