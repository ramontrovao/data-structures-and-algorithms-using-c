#include <stdio.h>

int sum(int x, int y) {
  printf("x = %d, &x = %p\n", x, &x);
  printf("y = %d, &y = %p\n", y, &y);

  int z = x + y;

  printf("z = %d, &z = %p\n", z, &z);

  return z;
}

int main() {
  int a = 5;
  int b = 10;
  int c;

  printf("a = %d, &a = %p\n", a, &a);
  printf("b = %d, &b = %p\n", b, &b);

  c = sum(a, b);

  printf("c = %d, &c = %p\n", c, &c);

  return 0;
}