#include <stdlib.h>

int main() {
  
  void *ptr = malloc(100*1024*1024);
  free(ptr);

  return 0;
}
