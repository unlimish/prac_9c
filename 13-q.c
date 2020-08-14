#include <stdio.h>

int main(void) {
  int data[10];
  for (int i = 0; i < 10; i++) {
    printf("Imput number");
    scanf("%d", &data[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n",data[i]);
  }
  
}