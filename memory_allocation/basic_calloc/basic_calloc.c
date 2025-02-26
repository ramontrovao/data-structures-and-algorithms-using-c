#include <stdio.h>
#include <stdlib.h>

int main() {
  // params -> multiply factor, size in bytes
  // default content of addresses allocatec -> 0 (null in case of pointers)
  int* pointerToMemoryHeap = (int*) calloc(5, sizeof(int));

  printf("pointerToMemoryHeap = %p\n", pointerToMemoryHeap);

  return 0;
}