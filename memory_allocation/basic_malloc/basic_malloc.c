#include <stdio.h>
#include <stdlib.h>

int main() {
  // memoryHeapPointer is allocated in stack, but the content is poiting to heap
  // param -> number in bytes of quantity of memory to be allocated
  // default content of addresses allocated -> memory garbage 
  int* memoryHeapPointer = (int*) malloc(5 * sizeof(int)); 

  printf("memoryHeapPointer = %p\n", memoryHeapPointer);

  return 0;
}