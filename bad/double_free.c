#include <stdlib.h>

int main() {
  void *ptr = malloc(1000);
  free(ptr);
  free(ptr);
  return 0;
}
