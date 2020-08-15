#include <stdio.h>
#include <string.h>

int main(void) {
  int i;

  char str[256];
  scanf("%s", str);

  i = strlen(str);

  printf("%\n", i);

  return 0;
}