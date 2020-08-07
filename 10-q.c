#include <stdio.h>

int main(void) {
  int score = 0;

  do {
    printf("Enter score:");
    scanf("%d", &score);
  } while (score < 0 || score > 100);

  printf("Score: %d\n", score);
}