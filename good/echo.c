#include <stdio.h>

int main(int argc, const char **argv) {
  printf(argv[1]);
  int i;
  for (i = 2; i < argc; ++i) {
    printf(" ");
    printf(argv[i]);
  }
  return 0;
}
