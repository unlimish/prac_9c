#include <stdio.h>

int main(void) {
  char c = 'A';
  int number;
  if (c >= '0' && c <= '9') {
    number = c - 0;
  } else {
    number = 0;
  }
  printf("%d\n", number);
  return 0;
}