//3-1
#include<stdio.h>

int main(void)
{
    int softDrink = 198;
    int milk = 138;
    int money = 1000;
    double tax = 1.05;

    int payment = (int)(money - (softDrink + milk * 2) * tax);

    printf("%d円\n", payment);
    return 0;
}
