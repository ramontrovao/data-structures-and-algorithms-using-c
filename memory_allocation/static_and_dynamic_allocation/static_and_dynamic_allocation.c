#include <stdio.h>
#include <stdlib.h>

int main () {
  int v_static[5] = {5, 4, 3, 2, 1};
  int* v_malloc = (int*) malloc(5 * sizeof(int));
  int* v_calloc = (int*) calloc(5, sizeof(int));

  puts("---static allocation (stack memory)---\n");
  printf("&v_static = %p, v_static = %p\n", &v_static, v_static);

  for (int i = 0; i < 5; i++) {
    printf("&v_static[%d] = %p,  v_static[%d] = %d\n", i, &v_static[i], i, v_static[i]);
  }

  puts("---malloc (heap memory)---\n");
  printf("&v_malloc = %p, v_malloc = %p\n", &v_malloc, v_malloc);

  for (int i = 0; i < 5; i++) {
    printf("&v_malloc[%d] = %p,  v_malloc[%d] = %d\n", i, &v_malloc[i], i, v_malloc[i]);
  }

  puts("---calloc (heap memory)---\n");
  printf("&v_calloc = %p, v_calloc = %p\n", &v_calloc, v_calloc);

  for (int i = 0; i < 5; i++) {
    printf("&v_calloc[%d] = %p,  v_calloc[%d] = %d\n", i, &v_calloc[i], i, v_calloc[i]);
  }
  
  return 0;
}
