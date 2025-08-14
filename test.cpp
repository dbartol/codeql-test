#include <stdio.h>

int main(int argc, const char* const* argv) {
  printf("Hello, world!\n");
  char buf[100];
  gets(buf);
  buf[101] = 0;

  buf[102] = 5;
  
  return 0;
}
