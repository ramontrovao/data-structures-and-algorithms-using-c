#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, *p1, *p2;

  a = 4;
  b = 3;
  p1 = &a;
  p2 = p1;
  *p2 = *p1 + 3; // a == 7
  b = b * (*p1); // b == 21
  (*p2)++; // a == 8
  p1 = &b;

  printf("%d, %d\n", *p1, *p2); // 21, 8
  printf("%d, %d\n", a, b); // 8, 21

  return 0;
}