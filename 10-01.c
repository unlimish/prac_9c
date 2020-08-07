#include <stdio.h>

int main(void) {
  double money = 1;
  int month = 1;

  while (money < 100000) {
    printf("%02d 月目 : %7.0f 円\n", month, money);
    money *= 2;
    month++;
  }
  printf("%02d 月目に %7.0f 円となり、100万円を越える。\n", month, money);

  return 0;
}