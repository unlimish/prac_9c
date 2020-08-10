#include <stdio.h>

int countcunc(void);

int main(void) {
  countcunc();
  countcunc();
  countcunc();
  return 0;
}

int countcunc(void) {
  int count;
  count++;
  printf("%d\n", count);
  return count;
}