#include <stdio.h>

int sum(void); //プロトタイプ宣言

int main(void) {
  sum();
  return 0;
}

int sum(void) {
  printf("%d\n", (1 + 100) * 100 / 2);
  return 0;
}