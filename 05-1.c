#include <stdio.h>

int main(void)
{
    double left,right;
    left = 10;
    right = 3;

    printf("%f\n",left + right);
    printf("%f\n",left - right);
    printf("%f\n",left * right);
    printf("%f\n",left / right);


    int value;
    value = 10;
    value += 30;
    printf("%d\n", value);
    value++;
    printf("%d\n", value);
    value--;
    printf("%d\n", value);
    return 0;
}
