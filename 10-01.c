#include <stdio.h>

int main(void) {
  int money = 1;
  int month = 1;

  while (money < 100000) {
    printf("%02d 月目 : %7d 円\n", month, money);
    money *= 2;
    month++;
  }
  printf("%02d 月目に %7d 円となり、100万円を越える。\n", month, money);

  return 0;
}