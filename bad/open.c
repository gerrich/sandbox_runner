#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    return 1;
  }
  int f = open(argv[1], O_RDONLY);
  if (f == -1) {
    return 1;
  }
  char buf[256];
  ssize_t bytes = read(f, buf, sizeof(buf) - 1);
  close(f);
  buf[bytes] = '\0';

  printf("str: %s\n", buf);
  return 0;
}
