#include <stdio.h>

int main(void) {
  int no;
  scanf("%d", &no);
  switch (no) {
    case 1:
      printf("野比のび太\n");
      break;
    case 2:
      printf("源静香\n");
      break;
    case 3:
      printf("剛田武\n");
      break;
    case 4:
      printf("骨川スネ夫\n");
      break;
    default:
      printf("存在しません\n");
      break;
  }
  return 0;
}