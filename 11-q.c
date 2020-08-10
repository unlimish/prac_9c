#include <stdio.h>

int olympic(int);

int main(void) {
  int year, held;
  printf("Type year by 4 digits:\n");
  scanf("%d", &year);
  held = olympic(year);

  switch (held) {
    case 0:
      printf("開かれない\n");
      break;
    case 1:
      printf("夏季オリンピック\n");
      break;
    case 2:
      printf("冬季オリンピック\n");
      break;
  }
}

int olympic(int year) {
  if (year % 2 == 0) {
    if (year % 4 == 0) {
      return 1;
    } else {
      return 2;
    }

  } else {
    return 0;
  }
}