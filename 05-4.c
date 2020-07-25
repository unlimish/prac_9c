#include <stdio.h>

int main(void)
{
    int a = 1000, b = 500, c = 3;
    double pi = 3.14159;

    //%全体桁数.小数桁数f

    printf("Aは %6d です。\n", a);
    printf("Bは %6d です。\n", b);
    printf("Cは %6d です。\n", c);

    printf("Piは %6.2f です。\n", pi);

    return 0;
}