#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() {
  int pid = fork();
  printf("should be stopped. my pid: %d\n", pid);

  return 0;
}
