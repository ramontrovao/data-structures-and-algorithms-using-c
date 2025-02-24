#include <stdio.h>

void sum_and_subtraction(int x, int y, int* sum_result, int* sub_result) {
  puts("-----IN FUNCTION-----");
  printf("x = %d, &x = %p\n", x, &x);
  printf("y = %d, &y = %p\n", y, &y);
  printf("sum_result = %p, &sum_result = %p, *sum_result = %d\n", sum_result, &sum_result, *sum_result);
  printf("sub_result = %p, &sub_result = %p, *sub_result = %d\n", sub_result, &sub_result, *sub_result);

  *sum_result = x + y;
  *sub_result = x - y;
}

int main() {
  int x = 10;
  int y = 5;
  int sum_result;
  int sub_result;

  puts("-----BEFORE FUNCTION CALL-----");
  printf("x = %d, &x = %p\n", x, &x);
  printf("y = %d, &y = %p\n", y, &y);
  printf("sum_result = %d, &sum_result = %p\n", sum_result, &sum_result);
  printf("sub_result = %d, &sub_result = %p\n", sub_result, &sub_result);

  sum_and_subtraction(x, y, &sum_result, &sub_result);

  puts("-----AFTER FUNCTION CALL-----");
  printf("x = %d, &x = %p\n", x, &x);
  printf("y = %d, &y = %p\n", y, &y);
  printf("sum_result = %d, &sum_result = %p\n", sum_result, &sum_result);
  printf("sub_result = %d, &sub_result = %p\n", sub_result, &sub_result);

  printf("Sum: %d\n", sum_result);
  printf("Subtraction: %d\n", sub_result);

  return 0;
}