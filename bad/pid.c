#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
  int pid = getpid();
  printf("pid: %d\n", pid);
  return 0;
}
